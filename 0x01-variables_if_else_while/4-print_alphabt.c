#include <stdio.h>
/**
 * main - print lower alphabet withuot q and e
 * Description: lists all lower letters with new lines
 *
 * Return: 0 for seccuss
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
	if (c != q && c != e)
	{
		putchar(c);
	}
		c++;
}
putchar('\n');
return (0);
}
