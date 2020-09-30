#include <stdio.h>
#include <math.h>
int main(){
	int num;
	double a[5];
	int count=0;
	for (int i=0;i<5;i++){
		scanf("%d",&num);
		if(num==0) break;
		else {
			switch(num){
				case 1:a[i] = 3.00;break;
				case 2:a[i] = 2.50;break;
				case 3:a[i] = 4.10;break;
				case 4:a[i] = 10.20;break;
				default: a[i] =0;
			}
			count++;
		}
	}
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	for(int i=0; i<count; i++){
	
		printf("price = %.2f\n", a[i]);
}
	
	}
