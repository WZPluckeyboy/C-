//�ж�1000��---2000��֮������� 
//������ֻ���жϿ�������ܲ��ܱ�4����������100������400����
#include<stdio.h>

#include<stdlib.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1000; i <= 2000; i++)       
	{
		if (i % 4 == 0 && i % 100 != 0)    //��4�����Ҳ���100����
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