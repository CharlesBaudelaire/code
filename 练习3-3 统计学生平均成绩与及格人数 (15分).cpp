#include <stdio.h>
#include <math.h> 
int main()
{
	int n,cou=0;
	scanf("%d",&n);
	int m,count =0,sum=0;
	if(n<=0){
		printf("average = 0.0\n");
		printf("count = 0\n");
	}
	else {
		for (int i=1;i<=n;i++){
		scanf("%d",&m);
		cou++;
		if (m>=60){
			count++;
		}
		sum+=m;
	
	}
    	double c=sum*1.0/cou;
		printf("average = %.1lf\n",c);
		printf("count = %d\n",count);
	}
	return 0;
}
