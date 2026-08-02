#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i, sum;
	
	i = 1;
	sum = 0;
	printf("argc = %d\n", argc);
	if (argc > 1)
	{
		while (i < argc)
		{
			/*printf("argv[%d] = %s\n", i, argv[i]);*/
			sum += atoi(argv[i]);
			i++;
		}
		printf("sum of values = %d\n", sum);
	}
	return (0);
}
