#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
}//以上为把给的角度转化为弧度的函数，以便于求出T
void ZhenSuan(double *x1, double *y1, double *S, double *T)
{
double x2 = 0;
double y2 = 0;
x2 = *x1 + *S * cos(*T);
printf("x2=%lf\n", x2);
y2 = *y1 + *S * sin(*T);
printf("y2=%lf\n", y2);
}//坐标正算公式
double rad_dms(double a)
{
a = a*206264.806247096363;
double sign = (a < 0.0) ? -1.0 : 1.0;
a = fabs(a);
int d = (int)(a / 3600.0 + 0.0000001);
a = a - d*3600.0;
if (a < 0.0)
{
d = d - 1;
a = a + 3600.0;
}
int m = (int)(a / 60.0 + 0.0001);
a = a - m*60.0;
if (a < 0.0)
{
m = m - 1;
a = a + 60.0;
}
a = d*10000.0 + m*100.0 + a;
return a*sign;
}//以上为弧度化角度函数
void FanSuan(double *x1, double *y1, double *x2, double *y2)
{
double S=0;
double T=0;
double ang = 0;
double dx = *x2 - *x1;
double dy = *y2 - *y1;
printf("两点间距离\n");
S = sqrt(dx*dx + dy*dy);
printf("S=%lf\n", S);
T = atan2(dy,dx);
printf("方位角\n");
ang = rad_dms(T);
printf("ang=%lf\n", ang);
}
//以上为坐标反算公式
//以下为函数的调用
int main()
{
double x1 = 0;
double y1 = 0;
double x2 = 0;
double y2 = 0;
double ang = 0;
double T = 0;
double s = 0;
printf("请输入一个角度值，形式如330545.34（33为度05为分45.34为秒）:\n");
scanf("%lf", &ang);
T = dms_rad(ang);
printf("T=%lf\n", T);
printf("请输入已知点坐标和距离(即x1,y1,s):\n");
scanf("%lf %lf %lf",&x1,&y1,&s);
ZhenSuan(&x1, &y1, &s, &T);
printf("请输入已知两点的点坐标(即x1,y1，x2,y2):\n");
scanf("%lf %lf %lf %lf", &x1,&y1,&x2,&y2);
FanSuan(&x1, &y1, &x2, &y2);
 system("pause");
return 0;
}
