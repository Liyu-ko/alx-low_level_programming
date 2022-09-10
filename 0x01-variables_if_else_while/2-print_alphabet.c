#include <stdio.h>
/**
 * main - alphabet in lower case
 *
 * Return: 0 for success
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
	putchar(c);
	c++;
}
putchar('\n');
return (0);
}
