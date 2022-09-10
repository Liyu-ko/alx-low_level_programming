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
int i, j;
i = '0'; j = '0';
{
	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j) || i == j)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putcha('\n');
				}
				else 
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++
		}
		j = '0';
		i++;
	}
	return (0);
}
