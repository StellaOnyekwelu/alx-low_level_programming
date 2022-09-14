#include "main.h"
/**
* print_to_98 - print integers between numbers and 98
* @n: number to count
*
* Return: void
*/
void print_to_98(int n)
{
if (n > 98)
{
while (n >= 98)
{
	printf("%d", n);
if (n != 98)
{
	printf(",");
}
n--;
}
}
else
{while (n <= 98)
{
	printf("%d", n);
if (n != 98)
{
	printf(",");
}
n++;
}
}
print("\n");
}
