#include <stdio.h>
#include <math.h>
double fact(int n);
int main(void){
	int m;
	double sum=0;
	scanf("%d",&m);
	for (int i=1;i<=m;i++){
		sum+=1*1.0/fact(i);
	}
	sum+=1;
	printf("%.8f",sum);
	
}
double fact(int n)
{
double sum=1.0;
for (int i=1;i<=n;i++){
sum*=i;
}
return sum;
}
 
