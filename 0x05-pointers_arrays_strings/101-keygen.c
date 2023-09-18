#include<stdio.h>
#include<stdlib>
#include<time.h>
/**
 * main-generates random valid passwords
 * Return: 0 Alwayes
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchat(c);
	}
	putchar(2772 - sum);
	return (0);
}
