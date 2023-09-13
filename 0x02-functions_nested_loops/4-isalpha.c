#include<stdio.h>
#include"main.h"
/**
 * _isalpha- check if the charecter is alphabet or not
 * @c: the charecter that will be test
 * Return: 1 if it's a charecter, 0 if it's not
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
return (1);
else if (c >= 97 && c <= 122)
return (1);
else
	return (0);
}
