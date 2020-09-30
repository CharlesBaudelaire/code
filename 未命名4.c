#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main(void){
	int i,m;
	scanf("%d",&i);
	while(i--){
		scanf("%d",&m);
		if (m%3==0&&m%2==0) printf("%d divisible by 2 and 3? 1\n",m);
		else printf("%d divisible by 2 and 3? 0\n",m);
		if (m%3==0||m%2==0) printf("%d divisible by 2 or 3? 1\n",m);
		else printf("%d divisible by 2 or 3? 0\n",m);
		if ((m%3==0&&m%2!=0)||(m%3!=0&&m%2==0))printf("%d divisible by 2 or 3, but not both? 1\n",m);
		else printf("%d divisible by 2 or 3, but not both? 0\n",m);
	} 
	return 0;
}
