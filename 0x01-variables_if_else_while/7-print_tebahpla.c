#include <stdio.h>
/**
 * main - A program that prints alphabets lowercase alphabet in reverse
 * Return: 0 (success)
*/
int main(void)
{
	int alphabets = 'z';

	while (alphabets >= 'a')
	{
		putchar(alphabets);
		alphabets--;
	}
	putchar('\n');
	return (0);
}
