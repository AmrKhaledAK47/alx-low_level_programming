#include"main.h"
/**
 * rot13 - prints array.
 * @s: array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *rot13(char *s)
{
char arr[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char arr2[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int n = strlen(s), i;
for (i = 0; i < n; i++)
{
int j;
for (j = 0; j < 52; j++)
{
if (s[i] == arr[j])
{
s[i] = arr2[j];
break;
}
}
}
return (s);
}
