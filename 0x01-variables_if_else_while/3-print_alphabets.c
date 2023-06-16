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
char c;
for (c = 'a' ; c <= 'z' ; c++)
putchar(c);
for (c = 'A' ; c <= 'Z' ; c++)
putchar(c);
putchar('\n');
return (0);
}
