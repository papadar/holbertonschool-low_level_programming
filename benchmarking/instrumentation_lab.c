#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

/**
 * next_value - collects the next value
 *
 * @state: The state is received, and returned
 *
 * Return: the next value * state
 */

static unsigned int next_value(unsigned int *state)
{
	*state = (*state * 1103515245u) + 12345u;
	return (*state);
}

/**
 * build_dataset - builds the set of data
 */

static void build_dataset(void)
{
	unsigned int state;
	int i;

	state = SEED_VALUE;

	for (i = 0; i < DATASET_SIZE; i++)
		dataset[i] = (int)(next_value(&state) % 100000);
}

/**
 * process_dataset - processes the data set
 */

static void process_dataset(void)
{
	int i;
	int v;

	for (i = 0; i < DATASET_SIZE; i++)
	{
		v = dataset[i];
		v = (v * 3) + (v / 7) - (v % 11);
		if (v < 0)
			v = -v;
		dataset[i] = v;
	}
}

/**
 * reduce_checksum - reduces the checksum
 *
 * Return: the sum of the operation
 */

static unsigned long reduce_checksum(void)
{
	unsigned long sum;
	int i;

	sum = 0;
	for (i = 0; i < DATASET_SIZE; i++)
		sum = (sum * 131ul) + (unsigned long)dataset[i];

	return (sum);
}

/**
 * main - does the work and records the times
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long checksum;
	float TOTAL, BUILD, PROCESS, REDUCE;
	clock_t start, end, lap0, lap1;

	start = clock();
	lap0 = clock();
	build_dataset();
	lap1 = clock();
	BUILD = (float)(lap1 - lap0) / (float)CLOCKS_PER_SEC;
	lap0 = clock();
	process_dataset();
	lap1 = clock();
	PROCESS = (float)(lap1 - lap0) / (float)CLOCKS_PER_SEC;
	lap0 = clock();
	checksum = reduce_checksum();
	lap1 = clock();
	REDUCE = (float)(lap1 - lap0) / (float)CLOCKS_PER_SEC;

	if (checksum == 0ul)
		printf("impossible\n");

	end = clock();
	TOTAL = (float)(end - start) / (float)CLOCKS_PER_SEC;

	printf("TOTAL seconds: %f\n", TOTAL);
	printf("BUILD_DATA seconds: %f\n", BUILD);
	printf("PROCESS seconds: %f\n", PROCESS);
	printf("REDUCE seconds: %f\n", REDUCE);

	return (0);
}
