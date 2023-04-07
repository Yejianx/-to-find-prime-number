#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

int main()
{
	int i = 0;
	int j = 0;
	int count=0;
    
	for (j = 101; j <= 200; j+=2)
	{
		for (i = 2; i <= sqrt(j); i++)//非素数必能写成两个数相乘，两个数之间相差越小，需要判断的数量也就越小，所以是开根。
		{
			if (j % i == 0)
			{
				break;

			}
		}

		if (i > sqrt(j))
		{
			printf("%d ", j);
			count++;
		}
		
	}
  
	printf("\n%d个 ", count);
	
	return 0;
}
