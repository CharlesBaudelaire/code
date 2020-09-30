#include <stdio.h>
#include <math.h> 
int main()
{	int n;
	scanf("%d",&n);
	if (n>=2100||n<=2000){
		printf("Invalid year!");
	}
	else{ int count =0;
		for (int i=2001;i<=n;i++){
			if ((i%4==0&&i%100!=0)||i%400==0){
				count++;
				printf("%d\n",i);
			}
		}
		if (count==0){
			printf("None");
		} 
	}
	return 0;
 } 
