#include <stdio.h>
#include <math.h> 
int main(){
	int n;
	double fz,fm,t;
	t=0;
	fz=2;
	fm=1;
	scanf("%d",&n);
	int i;
	double sum;
	sum=0;
	for (i=1;i<=n;i++){
		sum+=fz/fm;
		t=fz;
		fz=fz+fm;
		fm=t;
		
	}printf("%.2f",sum);
	 
	return 0;
}
