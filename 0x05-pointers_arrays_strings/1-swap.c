#include "main.h"
/**
 * swap_int-swaps the values of two integers
 * @a: The first var.
 * @b: The scond one
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
