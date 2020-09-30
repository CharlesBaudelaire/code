#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
//	char x,y;
//	scanf("%c %c",&x,&y);
//	printf("%d",x+y+1);
	int i;
	scanf("%d",&i);
	if (i%2019==0&&i%70!=0) printf("right");
	else printf("wrong");
	return 0;
}
