#include<stdio.h>
#include"main.h"
/**
 * _islower-chech if the charecter is lowercase or not
 * @c: the charecter that will be test
 * Return: 1 if the charecter is lowercas, 0 if the charecter isnot lowercase
 */
int _islower(int c)
{
if (c >= 97 || c <= 122)
	return (1);
else
	return (0);
}
