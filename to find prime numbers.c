#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

#define false 0
#define ture 1

int prime( int j)
{
	int i = 0;//用于判断是否为素数的值/to judge whether it is a prime number

		if (j% 2 == 0)//除二就等于除于所有偶数。/to divide 2 is to divide all even numbers.
		{

		}
		else
		{
			for (i = 3; i * i <= j; i += 2)//非素数必能写成两个数相乘，两个数之间相差越小，需要判断的数量也就越小，所以是开根。
			{
				
				if (j % i == 0)
				{
					return false;
				
				}
			}
		}
	
			return ture;
}

int main()
{
	int num = 0;

	scanf("%d",&num);

	if (prime(num))
	{
		printf("this is prime");
	}
	else
	{
		printf("this is not prime");
	}
}
