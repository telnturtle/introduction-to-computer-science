#include <stdio.h>
#include <math.h>

double dist(double x1, double y1, double x2, double y2);

int main(void)
{
	double x1, y1, x2, y2;
	double distance;		//거리
	
	printf("x1 = ? ");
	scanf("%lf", &x1);
	printf("y1 = ? ");
	scanf("%lf", &y1);
	printf("x2 = ? ");
	scanf("%lf", &x2);
	printf("y2 = ? ");
	scanf("%lf", &y2);
	
	distance = dist(x1, y1, x2, y2);
	
	printf("distance : %lf", distance);
	
	return 0;
}

double dist(double x1, double y1, double x2, double y2)
{
	return sqrt(pow((x1-x2), 2.0) + pow((y1-y2), 2.0));
}
