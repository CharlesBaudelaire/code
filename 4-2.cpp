#include <stdio.h>
#include <math.h>
double fact(int n);
int main(void) {
	double m,n,f,x;
	scanf("%lf",&x);
	
	double g=11;
	for (int i=2;fabs(g)>=0.00001;i++)
	{
		n=pow(x,i);
		g=n/fact(i);
		f+=n/fact(i);
	}
	m=1+x+f;
	printf("%.4f",m);
	return 0;
}
double fact(int n){
	double sum=1.0;
	for (int i=1;i<=n;i++){
		sum*=i;
	}
	return sum;
}
 
