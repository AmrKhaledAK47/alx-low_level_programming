#include"main.h"
/**
 * print_rev - prints reverse string.
 * @s: variable
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
int x = strlen(s);
int i;
for (i = x - 1; i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}
