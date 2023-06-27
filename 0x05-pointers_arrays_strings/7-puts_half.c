#include"main.h"
/**
 * puts_half - prints string.
 * @str: variable
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
;
i++;
for (i /= 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');

}
