#include <stdio.h>
#include <math.h>
int main(){
	int i;
	scanf("%d",&i);
	int c;
	int m;
	while(i--){
		scanf("%d",&c);
		if (c<350){
			if(c>=300) c%=150;
			else if(c<300&&c>=200) c-=200;
			else if(c>=150) c-=150;
			printf("%d\n",c);
		}
		else{
		m=c/150;
		c%=150;
		
		if(c==50) printf("%d\n",0);
		else if (c==100) printf("%d\n",0);
		else if (c<50) printf("%d\n",c);
		else { while(m>0&&c>50){c-=50;
		m--; 
		}
		printf("%d\n",c);
		}}
	}
	return 0;
}
