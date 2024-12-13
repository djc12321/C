#include<stdio.h>
#include<stdlib.h>
char* GetStr1(char* s)
{
	s = (char*)malloc(10241024);
	scanf_s("%s", s);
	return s;
}
int main2(void)
{
	char* ptr = NULL;
	ptr = GetStr1(ptr);
	puts(ptr);
	free(ptr);
	
	return 0;
}