#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h> 
int main(){
//	char a[100];
//	scanf("%s",&a[0]);
//	int b;
//	b=strlen(a);
//	if(b>10){
//		printf("BAD");
//		 
//	}
//	else printf("GOOD"); 
	int i;
	scanf("%d",&i);
	char c[100];
	int count=0;
	while(i--){
		scanf("%s",&c[0]);
		if (c=='True') count++;
	}
	printf("%d",count);
	return 0;
	
}
