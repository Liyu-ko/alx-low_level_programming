#include <stdio.h>
/**
 * main - combinaation of single digit number
 *
 *
 *
 * Return:0 when sucess
 */
int main(void)
{
int i = '0';
while (i != '9')
{
	putchar(i);
	if (i != '9')
	{
		putchar(',');
		putchar(' ');
	}
	i++;
}
putchar('\n');
return (0);
}
