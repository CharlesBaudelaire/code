#include <stdio.h>
#include <math.h>
int main(void){
	int n;
	scanf("%d",&n);
	int sum=1;
	for(int i=1;i<=(n-1);i++){
		sum+=1;
		sum*=2;
	}
	printf("%d",sum);
	return 0;
}

