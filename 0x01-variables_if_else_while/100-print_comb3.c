#include <stdio.h>
/**
 * main - A program that prints two digits separated with comma and space
 * Return: 0 (success)
*/
int main(void)
{
	int num_1, num_2;

	num_1 = '0';
	num_2 = '0';

	while (num_1 <= '9')
	{
		while (num_2 <= '9')
		{
			if (num_1 < num_2)
			{
				putchar(num_1);
				putchar(num_2);
				if (num_1 != '8' || (num_1 != '8' && num_2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			num_1++;
		}
		num_2++;
		num_2 = '0';
	}
	putchar('\n');
	return (0);
}
