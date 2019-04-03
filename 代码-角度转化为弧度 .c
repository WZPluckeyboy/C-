#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <math.h>
double dms_rad(double a)
{
double sign = (a < 0.0) ? -1.0 : 1.0;
a = fabs(a);
int d = (int)((a + 0.00001) / 10000.0);
a = a - d * 10000.0;
if (a < 0.0)
{
d = d - 1;
a = a + 10000;
}
int m = (int)((a + 0.00001) / 100.0);
a = a - m * 100;
if (a < 0.0)
{
m = m - 1;
a = a + 100.0;
}
a = sign * (d*3600.0 + m*60.0 + a) / 206264.806247096363;
return a;
}
int main()
{
double a=0;
double y=0 ;
printf("请输入一个角度值，形式如330545.34（33为度05为分45.34为秒）:\n");
scanf("%lf", &a);
y = dms_rad(a);
printf("%lf\n", y);
system("pause");
return 0;
}