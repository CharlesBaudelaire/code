#include <stdio.h>
#include <math.h>
int main(){
	int n;
	
	scanf("%d\n",&n);
	int a[1000];
	
	scanf("%d",&a[0]);
	for (int i=1;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n-1;i>0;i--){
		printf("%d ",a[i]);
	}
	printf("%d",a[0]);
	return 0;
}
