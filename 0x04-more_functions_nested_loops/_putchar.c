#include <unistd.h>

/**
* _putchar - writes a program
*
* @c: character to print
*
* Return: 1
* on error: -1 is returned
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
