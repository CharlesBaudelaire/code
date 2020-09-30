#include <stdio.h>
#include <math.h>
int main(){
//	int t;
//	long long a,b;
//	int count=1;
//	scanf("%d",&t);
//	while(t--){
//		scanf("%lld %lld",&a,&b);
//		printf("Case %d:\n",count);
//		printf("%lld\n",a+b);
//		printf("\n");
//		count++;
//	}
//	printf("cyp\nmwy\nzp\nwxa\nzl\nyl\ncjc\nydw\nsjy\nwjn\nlsc\nwzj\nzry\ncjf");
	int m,n;
	scanf("%d %d",&m,&n);
	int c=m;
	for(int i=1;i<=n;i++){
		printf("*");
	}
	printf("\n");
	while(m>2){
		for(int i=1;i<=n;i++){
			if (i==1||i==n) printf("*");
			else (printf(" "));
		}
		printf("\n");
		m--;
	}
	if(c>=2){
	
	for(int i=1;i<=n;i++){
		printf("*");
	}}
}
