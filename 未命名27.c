#include <stdio.h>
#include <math.h>
#include <stdbool.h> 
int main(){
	unsigned short int a,b;
	a=9;
	b=(unsigned short)(a<<2);
	printf("%u\n",b);
	b=(unsigned short)(a>>2);
	printf("%u\n",b);
}
