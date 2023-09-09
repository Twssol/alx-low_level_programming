#include <stdio.h>
/**
 * main-prints reverced lowercase alphabets.
 * followed by new line
 * Return: 0 (success)
 */
int main(void)
{
	char cha;

for (cha = 'z'; cha >= 'a'; cha--)
	putchar(cha);
putchar('\n');
return (0);
}
