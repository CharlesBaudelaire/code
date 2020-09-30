#include <stdio.h>
#include <math.h>
int main(){
	int m,n;
	m=0;
	scanf("%d\n",&n);
	int a[1000];
	int max;
	scanf("%d",&a[0]);
	max=a[0];
	
	int count=0;
	for(int i=1;i<n;i++){
		scanf(" %d",&a[i]);
		count++;
		if(a[i]>max){
		m=count;
		max=a[i];
			
		}
	}
	printf("%d %d",max,m);
}
