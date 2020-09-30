#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(){
////	printf("Hello World!\n");
//	printf("****\n");
//	printf("***\n");
//	printf("**\n");
//	printf("*\n");
//	printf("%d",1+2+3+4+5+6+7+8+9);
	double radius,length;
	double area,volume;
	scanf("%lf%lf",&radius,&length);
	area=PI*radius*radius;
	volume=area*length;
	printf("%f\n",volume);
	return 0;
	
}
