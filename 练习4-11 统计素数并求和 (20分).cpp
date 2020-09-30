#include <stdio.h>
#include <math.h>
int temp(int n);
int main() 
{int m,n,sum;
int count=0;
sum=0;
scanf("%d %d",&m,&n);
for (int i=m;i<=n;i++){
	if (temp(i)==1){
		printf("%d\n",i);
		count++;
		sum+=i;
	}
}
printf("%d %d",count,sum);
	
}
int temp(int n){
	int flag=1;
	if (n==1){flag=0;return flag;
	}
	if (n==2){ flag=1;
	return flag;
	} 
	for (int i=2;i<=(n-1);i++){
		if(n%i==0){
			flag=0;
		}
	}
	return flag;
}
