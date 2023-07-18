#include "main.h"

/**
 * _abs - Ccomputes the absolute value of an integer
 * @c: The character to be checked
 * Return: 1 Absolute value of a numberor zero
*/

int _abs(int c)
{

	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return  (abs_val);
	}
	return (c);
}
