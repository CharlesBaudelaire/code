#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
	char*a;
	scanf("%c",&*a);
	int l;
	l=strlen(a);
	if(l>10) printf("BAD");
	else printf("GOOD");
	return 0 ;
}
