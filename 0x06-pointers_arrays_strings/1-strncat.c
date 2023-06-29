#include"main.h"
/**
 * _strncat - prints array.
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{
int sz = strlen(src);
char p[100];
int i = 0, j = 0;
for (i = 0; dest[i] != '\0'; i++)
{
p[j] = dest[i];
j++;
}
i = 0;
if (n > sz)
{
for (i = 0; src[i] != '\0'; i++)
{
p[j] = src[i];
j++;
}
}
else
{
for (i = 0; i < n; i++)
{
p[j] = src[i];
j++;
}
}
p[j] = '\0';
i = 0;
while (p[i] != '\0')
{
dest[i] = p[i];
i++;
}
dest[i] = '\0';
return (dest);
}
