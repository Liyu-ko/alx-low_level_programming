#include <stdio.h>
/**
 * main - prints base 16
 *
 *
 *
 * Return: 0 for sucess
 */
int main(void)
{
int i = '0';

while (i <= '9')
{
	putchar(i);
	i++;
}
i = 'a';
while (i <= 'f')
{
	putchar(i);
	i++;
}
putchar('\n');
return (0);
}
