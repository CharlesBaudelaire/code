#include <stdio.h>
#include <math.h> 
int main()
{
	int n,c;
    c=1.0;
	
	double sum,i;
	i=1.0;
	scanf("%d",&n);
	while (i<=n*3){
		sum+=1.0/i*c;
        c=c*(-1);
		i+=3.0;
	}
	printf("sum = %.3f",sum);
	return 0;
}
