#include "main.h"
#include<stdio.h>

/**
 *print_array - update value.
 *@a: value to evaluate.
 *@n: value to evaluate.
 *Return: not.
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
