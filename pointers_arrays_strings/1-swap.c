#include "main.h"


/**
 * swap_int - swaps values of integers
 * @a: value of integer a
 * @b: value of integer b
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
