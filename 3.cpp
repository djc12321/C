#include<stdio.h>
int fun(int x, int y);
int main3()
{
	int x1, y1; int max, min;
	printf("请输入两个数字x,y(x>y):\n");
	scanf_s("%d%d", &x1, &y1);
	min = fun(x1, y1);
	max = (x1 * y1) / min;
	printf("最大公约数是%d，最小公倍数是%d", min, max);
	return 0;
}
int fun(int x, int y)
{
	int c = x % y;
	if (c == 0)
	{
		return y;
	}
	else
	{
		return fun(y, c);
	}
}