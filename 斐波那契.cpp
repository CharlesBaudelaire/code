#include <stdio.h>
#include <math.h>
int main(){
	
int n;
int he=2;
int t;
scanf("%d",&t);
while(t--){
	int count=2;
int sum=0;

scanf("%d",&n);
int i=2,x=0;
if (n==0){sum=0;
printf("%d\n",sum);}
if (n==1){sum=2;
printf("%d\n",sum);
continue;}
while(count<=n){
sum=x+i;
x=i;
i=sum;
count++;
he+=sum;
}
printf("%d\n",he);
he=2;
}
return 0;
} 
