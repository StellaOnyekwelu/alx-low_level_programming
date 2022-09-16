#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)                               {
if (i > 9)
	_putchar((i / 10) + '0');
	_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
