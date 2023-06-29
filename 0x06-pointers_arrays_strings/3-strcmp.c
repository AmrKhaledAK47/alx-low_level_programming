#include"main.h"
/**
 * _strcmp - prints array.
 * @s1: string
 * @s2: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, sum = 0;
for (i = 0; s2[i] != '\0' || s1[i] != '\0'; i++)
{
sum = (int) s1[i] - (int) s2[i];
if (sum != 0)
break;
}
return (sum);
}
