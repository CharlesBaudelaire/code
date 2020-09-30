#include <stdio.h>
#include <math.h>
int main(){
	char c='0';
	int flag=0;
	scanf("%c",&c);
	int count=0;

	
	if (c==' ') {printf("0");
	return 0;
	} 
	while(c!='\n'){
		while(c!=' '){
			scanf("%c",&c);
			flag=1;
		}
		while(c==' '){
			scanf("%c",&c);
			if(flag==0){
				count--;
			}
			}
		
		count++;
		flag=0;
		
	}
	printf("%d",count);
}
