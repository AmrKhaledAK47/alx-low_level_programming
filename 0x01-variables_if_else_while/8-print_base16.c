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
char c, x;
for (x = '0' ; x <= '9' ; x++)
putchar(x);
for (c = 'a' ; c <= 'f' ; c++)
putchar(c);
putchar('\n');
return (0);
}
