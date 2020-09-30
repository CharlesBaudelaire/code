#include <stdio.h>
#include <math.h>
int main(){
	int grade;
	while(scanf("%d",&grade)!=EOF) {
	
	//printf("«Î ‰»Î≥…º®:0-100");
	if(grade<0||grade>100){
		printf("Score is error!\n");
		continue;
	}
	grade/=10;
	
	switch (grade){
		case 10:
		case 9:
			printf("A\n") ;
			break ;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
		default:
			printf("E\n");
		
		} }
	return 0;
}
