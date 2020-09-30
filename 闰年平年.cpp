#include <stdio.h>
#include <math.h>
#include <stdbool.h> 
int main(){
	int year,f;
	printf("请输入某年的年份：");
	scanf("%d",&year);
	f=((year%4==0&&year%100!=0)||(year%400==0));
	f?printf("闰年\n"):printf("平年\n");
	 
}
