#include <stdio.h>

/**
* main - Print all single digit numbers of base 10 starting from 0,
* followed by a new line using only putchar
*
* Return: 0
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');

	putchar('\n');

	return (0);
}
