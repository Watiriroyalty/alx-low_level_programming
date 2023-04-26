#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * Return: 0
 */
int main (void)
{
    int number = 0;

    for (number = 0; number<10; number++)
    {
        printf("%i\n", number);
    }
    return (0);
}
