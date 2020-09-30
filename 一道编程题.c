#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	int x=0,sum=0,c,i=1,m=0;
	int a[100];
	int count=0;
	while(sum<100){
		sum=x+i;
		x=i;
		i=sum;
		a[count]=i;
		count++;
		
	}
	
	scanf("%d",&c);
	
	while(1){
		if (a[m]<=c&&a[m+1]>=c){
			if(a[m+1]==c){printf("%d\n%d\n",a[m+1],a[m+1]);
			break;
			}
			else{
			printf("%d\n%d\n",a[m],a[m+1]);
			break;}
		}
		m++;
	}
	return 0;
}
