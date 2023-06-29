#include"main.h"
/**
 * string_toupper - prints array.
 * @s: array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_toupper(char *s)
{
int n = strlen(s), i;
for (i = 0; i < n; i++)
{
if (s[i] >= 'a')
s[i] -= 32;
}
return (s);
}
