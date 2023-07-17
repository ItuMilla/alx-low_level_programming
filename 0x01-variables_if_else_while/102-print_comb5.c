#include <stdio.h>
/**
 * main - A program that prints numbers ranging from 0 to 99
 * Return: 0 (success)
*/
int main(void)
{
	int num1, num2, num3, num4;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	num4 = '0';

	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			while (num3 <= '9')
			{
				while (num4 <= '9')
				{
					if (((num3 + num4 > (num1 + num2) && num3 >= num1) || num1 < num3))
					{
					putchar(num1);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);
					putchar(',');
					putchar(' ');
					}
					num4++;
				}
				num4 = '0';
				num3++;
			}
			num3 = '0';
			num2++;
		}
		num2 = '0';
		num1++;
	}
	putchar('\n');
	return (0);
}
