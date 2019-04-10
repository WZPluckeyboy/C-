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
class Pnt2D{
public:
double x = 0;
double y = 0;
	double Pnt2D::SetPt (double sx, double sy){
		x = sx;
		y = sy;
		return x, y;
	}
	~Pnt2D(){  }

};

void ZhenSuan(Pnt2D p1,  double *S, double *T)
{
	Pnt2D p2;
	p2.x = p1.x + *S * cos(*T);
	printf("p2.x=%lf\n", p2.x);
	p2.y = p1.y + *S * sin(*T);
	printf("p2.y=%lf\n", p2.y);
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
void FanSuan(Pnt2D p1, Pnt2D p2)
{
	double S = 0;
	double T = 0;
	double ang = 0;
	double dx=p2.x -p1.x;
	double dy = p2.y - p1.y;
	printf("两点间距离\n");
	S = sqrt(dx*dx + dy*dy);
	printf("S=%lf\n", S);
	T = atan2(dy, dx);
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
	double x3 = 0;
	double y3 = 0;
	double ang = 0;
	double T = 0;
	double s = 0;
	printf("请输入一个角度值，形式如330545.34（33为度05为分45.34为秒）:\n");
	scanf("%lf", &ang);
	T = dms_rad(ang);
	printf("T=%lf\n", T);
	printf("请输入已知点坐标和距离(即x1,y1,s):\n");
	scanf("%lf %lf %lf", &x1, &y1, &s);
	Pnt2D p1;
	p1.SetPt(x1, y1);
	ZhenSuan( p1, &s, &T);
	printf("请输入已知两点的点坐标(即x1,y1，x2,y2):\n");
	scanf("%lf %lf %lf %lf", &x2, &y2, &x3, &y3);
	Pnt2D p2;
	Pnt2D p3;
	p2.SetPt(x2, y2);
	p3.SetPt(x3, y3);
	FanSuan(p2, p3);
	system("pause");
	return 0;
}
