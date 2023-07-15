#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Etrey point
 * Return: 0 (success)
*/
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last didgit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last didgit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last didgit of %d is %d and is greater than 6 and not o\n", n, m);
	return (0);
}
