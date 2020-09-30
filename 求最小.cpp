#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,f;
	scanf("%d",&n);
	int min;
	scanf("%d",&f);
	min=f;
	for (int i=2;i<=n;i++){
		scanf("%d",&m);
		if (min>m){
			min=m;
		}
	}
	printf("min = %d",min);
	return 0;
 } 
