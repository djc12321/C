#include<stdio.h>
#include<math.h>
int prime(int x);
int main()
{
	int a1=200,a2=100;
	int M = prime(a1);
	int N = prime(a2);
	printf("100-200以内的质数有%d个",M-N );
	return 0;
}
int prime(int x)
{
	int i,j,n;
	n = 0;
	for (i = 2; i <= x; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				n++; break;
			}
		}
	}
	int N = x - n-1;
	return N;
}