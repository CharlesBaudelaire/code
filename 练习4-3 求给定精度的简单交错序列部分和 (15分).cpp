#include <stdio.h>
#include <math.h> 
int main(){
	double sum=0,m=1,n=1,t=1;
	int sign=1;
	double e;
	scanf("%lf",&e);
	if (e>=1) printf("sum = 1.000000");
	else {
		while(fabs(t)>e){
			t=sign*m/n;
			sum+=t;
			sign=-sign;
			n+=3;
		}printf("sum = %.6f",sum);
	}
	
}

