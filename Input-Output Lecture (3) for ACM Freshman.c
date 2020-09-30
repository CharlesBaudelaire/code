#include <stdio.h>
#include <math.h>
int main(){
	int i;
	scanf("%d",&i);
	double m,n;
	
	int count=1;
	while(i--){
		scanf("%lf %lf",&m,&n);
		printf("Case %d:\n%.0f\n",count,m+n);
		printf("              \n");
		count++;
	}
	return 0;
}
