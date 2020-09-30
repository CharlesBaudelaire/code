#include <stdio.h>
#include <math.h> 
int main()
{
	int c;
	double n;
    c=1.0;
	
	double sum,i;
	while(scanf("%lf",&n)!=EOF){ 
	
	i=1.0;
	
	while (i<=n*2){
		sum+=1.0/i*c;
        c=c*(-1);
		i+=2.0;
	}
	printf("%.5f\n",sum);
	sum=0;
	c=1.0;
	} 
	return 0;
}
