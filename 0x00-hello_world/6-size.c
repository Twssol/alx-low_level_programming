#include<stdio.h>
/**
 * main- A program prints diffrent the size of various computer types
 * Return: 0 (success)
 */
int main(void)
{ char c;
	int i;
	long int L;
	long long int LL;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(L));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(LL));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0); }
