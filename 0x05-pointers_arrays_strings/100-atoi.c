#include"main.h"
/**
 * _atoi - prints array.
 * @s: array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _atoi(char *s)
{
unsigned int num = 0;
int sign = 1;
do {
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');
else if (num > 0)
break;
} while (*s++);
return (num *sign);
}
