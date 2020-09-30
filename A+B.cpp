#include <stdio.h>
#include <math.h>
int main(){
	long long a,b;
	int t;
	scanf("%d",&t);
	while(t>0){
		scanf("%lld %lld",&a,&b);
		printf("%lld\n",a+b);
		t--;
	}
}
