#include <stdio.h>
#include <math.h>
int temp(int n);
int main(){
	int i;
	while(scanf("%d",&i)!=EOF&&i!=0){ 
	
	printf("%d\n",temp(i));
	} 
	return 0;
	
}
int temp (int n){
	int c=n;
	int q=0;
	int flag=0;
	int m=0;
	q=c%10;
	c/=10;
	while(c>0){
		m=q;
		q=c%10;
		
		c/=10;
		if(m==0&&q==6) {
			flag=1;
			break;
		}	
		
		
	}
	return flag;
}
