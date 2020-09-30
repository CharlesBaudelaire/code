#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int temp (int n);
int main(){
	int i;
	scanf("%d",&i);
	int count=0;
	int sum=0;
	int n;
	while(i--){
		scanf("%d",&n);
		if(temp(n)==0) continue;
		sum+=n;
		count++;
	}
	printf("%d\n",sum);
	printf("%d",count);
}
int temp (int n){
	int c=n;
	int q=0;
	int flag=1;
	while(c>0){
		q=c%10;
		c/=10;
		if(q==4) {
			flag=0;
			break;
		}	
		
		
	}
	return flag;
}
