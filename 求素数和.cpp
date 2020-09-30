#include <stdio.h>
#include <math.h> 
int main()
{	int m,n;
int i;
	scanf("%d %d",&m,&n);
	int cnt=0;
	int sum=0;
	if (m==1){
		m=2;
	}
	for (i=m;i<=n;i++){
		int mask =1;
		int k; 
		for(k=2;k<i-1;k++){
			if(i%k==0){
				mask=0;
				break;
			}
		}
		if (mask){
			cnt++;
			sum+=i;
		}
		
	}
	return 0;
}
