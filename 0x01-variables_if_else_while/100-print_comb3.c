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
int c, x;
for (c = 0 ; c <= 9 ; c++)
{
for (x = c + 1 ; x <= 9 ; x++)
{
putchar(c + 48);
putchar(x + 48);
if (c != 8)
putchar(',');
if (c != 8)
putchar(' ');
}
}
putchar('\n');
return (0);
}
