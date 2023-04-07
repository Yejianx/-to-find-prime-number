#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

int main()
{
	int i = 0;//用于判断是否为素数的值
	int j = 0;//取值范围
	int count=0;//记录素数的个数
	int Ctimes = 0;//记录计算机运算的次数
    
	for (j = 101; j <= 200; j+=2)
	{
		if (j % 2 == 0)//除二就等于除于所有偶数。
		{
			Ctimes++;
		}
		else 
		{
			for (i = 3; i * i <= j; i +=2)//非素数必能写成两个数相乘，两个数之间相差越小，需要判断的数量也就越小，所以是开根。
			{
				Ctimes++;

				if (j % i == 0)
				{
					break;
					Ctimes++;
				}
			}
		}
		

		if (i > sqrt(j))
		{
			printf("%d ", j);
			count++;
			Ctimes++;
		}
		
	}
  
	printf("\n%d个 ", count);
	printf("\n运算了%d次 ", Ctimes);
	
	return 0;
}
