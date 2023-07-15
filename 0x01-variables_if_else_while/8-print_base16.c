#include <stdio.h>
/**
 * main - A program that prints all the numbers of base 16 in lowercase
 * Return: 0 (success)
*/
int main(void)
{
	char numbers = '0';
	char letters = 'a';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
