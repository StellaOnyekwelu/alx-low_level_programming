#include "main.h"
/**
* print_sign - prints sign of a number
* @n: positive, zero or negative integer
* Return 1 if positive, 0 if negative, -1 if negative
*/

int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n < 0)
{
	_putchar('-');
	return (-1);
}
else
{
	_putchar('0');
	return (0);
}
}
