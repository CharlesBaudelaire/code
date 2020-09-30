#include <stdio.h>
#include <math.h>

double dist( double x1, double y1, double x2, double y2 ){
	double x,y;
	x=fabs(x1-x2);
	y=fabs(y1-y2);
	double f;
	f=sqrt((pow(x,2)+pow(y1-y2,2)));
	return f;
}
