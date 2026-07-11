#include <stdio.h>

/**
* print_table - prints a times table 0 - size
*
* @size - the provided maximum value
*
* Return: void - nothing
*/

void print_table(int size)
{
    int row, col;

    for (row = 1; row <= size; row++)
    {
        for (col = 1; col <= size; col++)
        {
            printf("%d ", row * col);
        }
        printf("\n");
    }
}

/* -- DO NOT Modify the code below this line -- */

int main(void)
{
    print_table(4);
    return 0;
}
