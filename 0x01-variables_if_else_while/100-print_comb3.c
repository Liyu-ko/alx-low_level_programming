#include <stdio.h>
/**
 * main - different combination
 *
 *
 *
 *
 * Return: 0 for success
 */
int main(void)
{
int i = '0';
int j = '0';

while (i <= '9')
{
	while (j <= '9')
	{
		putchar(i);
		putchar(j);
		if (j == '9' && i == '8')
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		j++;
	}
	if (j >= '9')
	{
		j = '0';
	}
	i++;
}
return (0);
}
