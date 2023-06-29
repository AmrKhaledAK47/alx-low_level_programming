#include"main.h"
/**
 * reverse_array - prints array.
 * @a: array
 * @n: number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reverse_array(int *a, int n)
{
int i, arr[1000], j;
for (i = n - 1; i >= 0; i--)
{
arr[i] = a[i];
}
for (j = 0; j < n; j++)
{
a[j] = arr[n - j - 1];
}
}

