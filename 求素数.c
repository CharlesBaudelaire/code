#include <stdio.h>
#include <math.h>
int temp(int n);
int main() 
{int sum;
int count=0;
sum=0;

for (int i=100;i<=200;i++){
	if (temp(i)==1){
//		printf("%d",i);
		count++;
		sum+=i;
	}
}
printf("%d\n",count);
for (int i=100;i<=200;i++){
	if (temp(i)==1){
		printf("%d ",i);
		count++;
		sum+=i;
	}
}
	
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
