#include <stdio.h>
/**
 * main - alphabet in reverse
 *
 *
 *
 * Return: 0 for sucess
 */
int main(void)
{
char c = 'z';

while (c >= 'a')
{
	putchar(c);
	c--;
}
putchar('\n');
return (0);
}
