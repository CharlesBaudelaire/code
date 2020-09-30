#include <stdio.h>
#include <math.h> 
int main()
{
	int n;
	
	double sum,i;
	i=1.0;
	scanf("%d",&n);
	while (i<=n){
		sum+=1/i;
		i++;
	}
	printf("sum = %.6f",sum);
	
	return 0;
}
