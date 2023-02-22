#include <stdio.h>

/**
* main - prints all single digit numbers of base 10 starting from 0,
* followed by a new line
*
* Return: 0
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%i", digit);
	putchar('\n');

	return (0);
}
