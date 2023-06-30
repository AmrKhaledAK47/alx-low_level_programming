#include"main.h"
/**
 * leet - prints array.
 * @s: array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *leet(char *s)
{
char arr[] = "aeotl", num[] = "43071";
int n = strlen(s), i;
for (i = 0; i < n; i++)
{
int j;
for (j = 0; j < 5; j++)
{
if (s[i] == arr[j] || s[i] == (arr[j] - 32))
s[i] = num[j];
}
}
return (s);
}
