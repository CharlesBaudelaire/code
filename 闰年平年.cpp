#include <stdio.h>
#include <math.h>
#include <stdbool.h> 
int main(){
	int year,f;
	printf("������ĳ�����ݣ�");
	scanf("%d",&year);
	f=((year%4==0&&year%100!=0)||(year%400==0));
	f?printf("����\n"):printf("ƽ��\n");
	 
}
