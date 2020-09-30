#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int temp(int n);
int main(){
	int t; // t是测试次数，在样例中是4
	scanf("%d",&t);
	 int n;
	while (t--) {
		scanf("%d",&n);
		if (n%7==0||temp(n)==0) printf("pa\n");
		else printf("%d\n",n);
}
}
int temp (int n){
	int c=n;
	int q=0;
	int flag=1;
	while(c>0){
		q=c%10;
		c/=10;
		if(q==7) {
			flag=0;
			break;
		}	
		
		
	}
	return flag;
}
