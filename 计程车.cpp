#include <stdio.h>
#include <math.h> 
int main(){
	int m,n;
	scanf("%d\n",&n);
	int count1,count2,count3,count4,count5;
	count1=count2=count3=count4=count5=0;
	for (int i=1;i<=n;i++){
		scanf("%d",&m);
		if (m>=90) count1++;
		else if (m>=80&&m<90) count2++;
		else if (m>=70&&m<80)count3++;
		else if (m>=60&&m<70) count4++;
		else count5++;
		
		 
	}
	printf("%d %d %d %d %d",count1,count2,count3,count4,count5);
	
	
	
	}
