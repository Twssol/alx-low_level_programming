#include <stdio.h>
int prime(int n)
{
int i, flag = 0;

if (n == 0 || n == 1)
	  flag = 1;
for (i = 2; i <= n / 2; ++i)
{
	if (n % i == 0)
	{
		flag = 1;
		break;
	}
}
if (flag == 0)
return (0);
else     
return (1);
}

int main(void)
{
long int x = 612852475143;
long int n;

for (n = 3; n < 782849; n = n + 2)
{
	if (prime(n) == 0)
	{
		while ((x % n) == 0 && (n != x))
		{
			printf("n value is %ld\n", n);
			x = x / n;
		}
		}
	}
}
printf("n value is %ld\n", n);
return (0);
}
