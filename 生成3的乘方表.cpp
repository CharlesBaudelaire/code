#include <stdio.h>
#include <math.h> 
int main()
{
	int n,m,i=0;
	
	scanf("%d",&n);
	while(i<=n){
		printf("pow(3,%d) = %d\n",i,m=pow(3,i));
		i++;
	}
	return 0;
}
