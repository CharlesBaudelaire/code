#include <stdio.h>
#include <math.h>
int main(){
	int a[100]={0};
	int i;
	scanf("%d",&i);
	for (int c=0;c<i;c++){
		scanf("%d",&a[c]);
	}
	for (int x=0;x<i;x++){
		for (int y=0;y<i-x;y++){
			int temp;
			if(abs(a[y+1])<abs(a[y])){
				temp=a[y+1];
				a[y+1]=a[y];
				a[y]=temp;}
			else if(abs(a[y+1])==abs(a[y])&&a[y+1]<a[y]){
				temp=a[y+1];
				a[y+1]=a[y];
				a[y]=temp;
			
			}
		}
	}
	for (int m=1;m<=i;m++){
		printf("%d ",a[m]);
	}
	
}
