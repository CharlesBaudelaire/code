#include <stdio.h>
#include <math.h>
int main(void){
	int sj,n;
	scanf("%d %d",&sj,&n);
	int count=0;
	int sr;
	for (int i=0;i<=n;i++){
		scanf("%d",&sr);
		count++;
		if (sr==sj&&count==1) {
		printf("Bingo!\n");
		return 0;
		break;}
		else if (sr==sj&&count>1){
			
			break;
		}
		else if (sr<sj) {
		printf("Too small\n");
		}
		else if (sr<0){
			printf("Game Over\n");
			exit(0);
		}
		else{	printf("Too big\n");
			
		}
	}
	if ((count<=3)&&count>1) printf("Lucky You!\n");
	else if (count> n) printf("Game Over\n");
	else printf("Good Guess!\n");
}
