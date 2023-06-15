#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'print a statement'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char err1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, err1, strlen(err1));
return (1);
}
