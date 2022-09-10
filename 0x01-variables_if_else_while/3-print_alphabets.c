#include <stdio.h>

/**
 * main - capital and lower case
 * Description: list both of them
 *
 * Return: 0 for success
 */
int main(void)
{
char c = 'a';
char d = 'A';

while (c <= 'z')
{
	putchar(c);
	c++;
}
while (c <= 'Z')
{
	putchar(d);
	d++;
}
putchar('\n');
return (0);
}
