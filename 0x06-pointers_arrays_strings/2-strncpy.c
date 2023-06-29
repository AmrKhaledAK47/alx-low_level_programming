#include"main.h"
/**
 * _strncpy - prints array.
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncpy(char *dest, char *src, int n)
{
int sz = strlen(src);
int i = 0;
if (n > sz)
{
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
}
else
{
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
}
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
