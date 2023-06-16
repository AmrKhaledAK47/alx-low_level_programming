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
int c;
for (c = 0 ; c <= 9 ; c++)
{
putchar(c + 48);
if (c != 9)
putchar(',');
if (c != 9)
putchar(' ');
}
putchar('\n');
return (0);
}
