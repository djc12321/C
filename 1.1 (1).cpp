#include<stdio.h>
#include<stdlib.h>
char* GetStr(char*s)
{
	s = (char*)malloc(10241024);
	if (s == NULL)
	{
		return NULL;
	}
	scanf_s("%s", s);
	return s;
}
int main1(void)
{
	char* ptr = NULL;
	ptr = GetStr(ptr);
		puts(ptr);
		free(ptr);
	return 0;
}