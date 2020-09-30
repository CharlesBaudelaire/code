#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int temp (int n);
int main(){
	int i;
	scanf("%d",&i);
	int count = 0;
	int n;
	while(i--){
		scanf("%d",&n);
		for (int c=2;c<=n;c++){
			if (temp(c)==1) count++;
		}
		printf("%d\n",count);
		count=0;
	}
	return 0;
}
int temp(int n){
int flag=1;
if (n<=1){flag=0;return flag;
}
if (n==2){ flag=1;
return flag;
} 
for (int i=2;i<=sqrt(n);i++){
if(n%i==0){
flag=0;
}
}
return flag;
}
 
