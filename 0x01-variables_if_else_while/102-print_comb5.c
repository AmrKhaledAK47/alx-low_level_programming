#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'print a statement'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x, y;
for (x = 0 ; x <= 99 ; x++)
{
for (y = x + 1 ; y <= 99 ; y++)
{
putchar(x / 10 + 48);
putchar(x % 10 + 48);
putchar(' ');
putchar(y / 10 + 48);
putchar(y % 10 + 48);
if (x == 98 && y == 99)
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
