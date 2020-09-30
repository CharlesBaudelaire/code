#include <stdio.h>
#include <math.h> 
int main(){
	int n;
	int i=1;
	scanf("%d",&n);
	double sum=0;
	while(i<=n){
		sum+=sqrt(i);
		i++;
	}
	printf("sum = %.2f",sum);
}
