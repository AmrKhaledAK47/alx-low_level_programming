#include"main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: variable
 * @b: variable
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
