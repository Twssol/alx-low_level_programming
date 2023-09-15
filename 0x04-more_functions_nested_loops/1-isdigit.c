#include"main.h"
/**
 * _isdigit-check for digit
 * @c:the input will be checked
 * Return: 1 if it's digit, 0 if it's not
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
