#include"main.h"
#define SIZE 1000
/**
 * rev_string - prints reverse string.
 * @s: variable
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
const int x = strlen(s);
int i;
char tmp;
for (i = 0; i < x / 2; i++)
{
tmp = s[i];
s[i] = s[x - 1 - i];
s[x - 1 - i] = tmp;
}
}
