#include"main.h"
/**
 * print_number - prints array.
 * @n: number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_number(int n)
{
unsigned int k = n;
if (n < 0)
{
n *= -1;
k = n;
_putchar('-');
}
k /= 10;
if (k != 0)
print_number(k);
_putchar((unsigned int) n % 10 + '0');
}
