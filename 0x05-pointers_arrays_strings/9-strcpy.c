#include"main.h"
/**
 * *_strcpy-copies the string to buffer
 * @dest:point to the buffer
 * @src: pointer to the string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
