#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print alphabets in lowercase
*
* Return: 0
*/

int main(void)
{
char ch, e, q;
e = 'e';
q = 'q';

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != e && ch != q)
	putchar(ch);
}
putchar('\n');
return (0);
}
