#include "main.h"
/**
* _isalpha - checks if a character is an alphabet or not
* @c: ascii value
* Return: 1 if lowercase or 0
*/

int _isalpha(int c)
{
if ((c >= 97 && c <= 123) || (c >= 65 && c <= 91))
{
return (1);
}
else
{
return (0);
}
}
