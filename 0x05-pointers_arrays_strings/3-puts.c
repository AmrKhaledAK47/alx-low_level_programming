#include"main.h"
/**
 * _puts - prints string.
 * @str: variable
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts(char *str)
{
int x = strlen(str);
int i;
for (i = 0; i < x; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
