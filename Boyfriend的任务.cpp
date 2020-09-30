#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	long int i;
	scanf("%ld",&i);
	int h,f,s;
	h=i/3600;
	i%=3600;
	f=i/60;
	i%=60;
	s=i;
	printf("%d %d %d",h,f,s);
	return 0;
}
