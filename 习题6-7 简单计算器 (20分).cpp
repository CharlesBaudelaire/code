#include <stdio.h>
#include <math.h>
int main(){
	int count=0;
	int sum=0;
	int num;
	scanf("%d",&sum);
	char c='0';
	scanf("%c",&c);
	do{
		if(c=='=') break;
		scanf("%d",&num);
		if (c=='+') {sum+=num;
		}
		else if(c=='-'){sum-=num;
		}
		else if(c=='*'){sum*=num;
		}
		else if(c=='/'){if (num==0){
			count=1;
			break;
		}
		else{ sum/=num;
		}
		}
		else{count=1;break;
		}
		scanf("%c",&c);
		
	}while(c!='=');
	if(count==1){
		printf("ERROR");
	}
	else{printf("%d",sum);
	}
}


