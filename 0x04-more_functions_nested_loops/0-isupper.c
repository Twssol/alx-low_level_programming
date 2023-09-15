#include"main.h"
/**
 * _isupper-check if the charecter is uppercase or not
 * @c: The charecter
 * Return: 1 if it's upper, 0 if it's lower
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
