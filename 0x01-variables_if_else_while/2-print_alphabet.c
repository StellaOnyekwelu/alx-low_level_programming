#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print alphabets in lowercase
*
* Return: 0
*/

int main(void)
{
char low;

for (low = 'a'; low<= 'z'; low++)
{
	putchar(low);
	putchar('\n');
}
return (0);
}
