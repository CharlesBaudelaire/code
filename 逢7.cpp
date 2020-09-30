#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d\n",&t);
	int m;
	int a;
	for (int i=1;i<=t;i++){
		
		a=scanf("%d\n",&m);
	for (int c=1;c<=t;c++){
		if (a%7==0||a/10==7||a%10==7)
		{
			printf("pa\n");
		 } 
		 else printf("%d\n",a);
	}
	
	
}
return 0;
}
