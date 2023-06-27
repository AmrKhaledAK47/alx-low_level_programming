#include"main.h"
/**
 * puts2 - prints string.
 * @str: variable
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts2(char *str)
{
int x = strlen(str);
int i;
for (i = 0; i < x; i++)
{
if (i % 2 == 0)
_putchar(*(str + i));
}
_putchar('\n');
}
