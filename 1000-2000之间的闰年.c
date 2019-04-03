//判断1000年---2000年之间的闰年 
//此问题只需判断看该年份能不能被4整除而不被100整除或被400整除
#include<stdio.h>

#include<stdlib.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1000; i <= 2000; i++)       
	{
		if (i % 4 == 0 && i % 100 != 0)    //被4整除且不被100整除
		{
			printf("%d ", i);
			count++;
		}
		if (i % 400 == 0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("count=%d ", count);
	system("pause");
	return 0;
}