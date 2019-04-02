//Sn=a+aa+aaa+aaaa+aaaaa
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	int sum = 0;
	int num = 0;
	int i = 0;
	int a = 0;
int    n=0;
	scanf("%d %d",&n &num);
	for (i = 0; i <n; i++)
	{
	a = a * 10 + num;
	sum = sum + a;
  printf("%d\n", sum);
	}
	
system("pause");
return 0;

}
