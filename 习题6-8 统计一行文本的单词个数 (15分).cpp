#include <stdio.h>
#include <math.h>
int main(){
	char c='0';
	int sum=0;
	scanf("%c",&c);
	while (c!='.'){
		if(c=' '){scanf("%c",&c);
		while (c=' '){
			scanf("%c",&c);
			
		}
		sum+=1; 
		}
		scanf("%c",&c);
		
		
	}
	sum+=1;
	printf("%d",sum);
}
