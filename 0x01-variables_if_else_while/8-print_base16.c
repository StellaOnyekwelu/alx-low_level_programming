#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - print all the numbers of base 16
*
* Return: 0
*/
int main(void)
{
int d;
char ch;

for (d = '0', d <= '9'; d++)
{
	putchar(d);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
