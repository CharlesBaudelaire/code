#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h> 
int main(){
	int i=1;
	double m=100;
	while(i!=0){
		scanf("%d",&i);
		if(i==0) break;
		for (int c=1;c<=i;c++){
			m*=0.7;
		}
		printf("%.2f\n",m);
		m=100.00;
	}
	return 0;
}
