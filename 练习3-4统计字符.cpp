#include <stdio.h>
#include <math.h> 
int main(){
	int letter=0;
	int blank=0;
	int digit=0;
	int other=0;
	char a[11];
	int count=0;
	for (int i=0;i<10;i++){
		scanf("%c",&a[i]);
	}
	for (int i=0;i<10;i++){
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')) {letter++;} 
		else if(a[i]>='0'&&a[i]<='9') {digit++;} 
		else if(a[i]==' '||a[i]=='\n') {blank++;} 
		else {other++;} 
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
	
} 
