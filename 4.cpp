#include<stdio.h>
void swap(int a[], int n);
int main4()
{
	int a[100]; int n,i;
	printf("�������������ֵĸ�����\n");
	scanf_s("%d", &n);
	printf("������%d�����֣�\n",n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	swap(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}
void swap(int a[], int n)
{
	int i,temp;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}