#include <stdio.h>
#include <math.h>
int main(){
	int i;
	scanf("%d",&i);
	int c;
	while(i--){
		scanf("%d",&c);
		c%=150;
		if(c==50) printf("0\n");
		else if (c==100) printf("0");
		else if (c<50) printf("%d",c);
		else { printf("%d",c);
		}
	}
	return 0;
}
