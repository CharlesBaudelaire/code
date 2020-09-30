#include <stdio.h>
#include <math.h> 
int main(void)
{
	int lower,upper,C1;
	double C2;
	scanf("%d %d",&lower,&upper) ;
	
	if (lower<=upper){
		printf("fahr celsius\n");
		for (C1=lower;C1<=upper;C1=C1+2){
				C2=5.0*(C1-32)/9.0;
				printf("%d   %.1lf\n",C1,C2);
		}	
	}
	else 
	printf("Invalid.");
	
	return 0;
}
