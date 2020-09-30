#include <stdio.h>
#include <math.h>
int main(){
	int m,n;
	scanf("%d",&n);
	int sum=0;
	int i=1;
	int x=0;
	m=1;
	if (n==1){
		printf("1");
		return 0;
	}
	while (sum<n){
		sum=x+i;
		x=i;
		i=sum;
		
		
		m++;
	}
	printf("%d",m);
}
