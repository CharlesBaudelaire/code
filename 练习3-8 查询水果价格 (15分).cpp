#include <stdio.h>
#include <math.h>
int main(){
	printf("[1] apple\n");
	printf("[2] pear\n");
	printf("[3] orange\n");
	printf("[4] grape\n");
	printf("[0] exit\n");
	int number;
	for (int i=1;i<=5;i++){
	scanf("%d",&number);
	switch (number){
		case 1:printf("price = 3.00\n");break;
		case 2:printf("price = 2.50\n");break;
		case 3:printf("price = 4.10\n");break;
		case 4:printf("price = 10.20\n");break;
		case 0:break; 
		default:printf("price = 0.00\n");break;
	}}
}
