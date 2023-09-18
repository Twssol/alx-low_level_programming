#include <unistd.h>
#include "main.h" 
#include<stdio.h>
/**
 * _putchar-writes one charecter to stdout
 * @c: The charecter to print
 * Return: On success 1.
 *	on errorr, -1 returned, and errno is set approperiatly.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
