#include <stdio.h>
#include <math.h>
int main(){
	char a[20];
	int sum=0;
	
	
	
	for (int i=0;i<5;i++){
	
		scanf("%c",&a[i]) ;
		getchar();
		if (a[i]=='A') sum+=1;
		
		else if (a[i]=='B') sum+=2;
		else if (a[i]=='C') sum+=3;
		else if (a[i]=='D') sum+=4;
//		else if (a[i]==' ') i--;
	}
	printf("%d",sum);
	return 0;
}
