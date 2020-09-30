#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

double funcos( double e, double x ){
	double m=0;
	int flag=1;
	double temp=0;
	double g=0;
	double f=0;
	do { 
	for (int i=1;i<=f;i++){
		g*=i; 
	}
	m=pow(x,f)/g;
	f+=2;
	temp+=m*flag;
	flag=-flag;
	
	}while(fabs(m)<e);
	return temp;
	
	
}
