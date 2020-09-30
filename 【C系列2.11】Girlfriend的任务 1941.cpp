#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	double x,y,sum,c,pj;
	scanf("%lf %lf",&x,&y);
	sum=x+y;
	c=x-y;
	pj=(x+y)/2;
	printf("%.2f\n%.2f\n%.2f\n",sum,c,pj);
	return 0;
}
