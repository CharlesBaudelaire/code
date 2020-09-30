#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h> 
int main(){
	int baiyuan,wushi,shi,wu,yi;
	baiyuan=wushi=shi=wu=yi=0;
	int sum;
//	int count=0;
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&sum);
		for (;yi<=10000;yi++){
			for(;wu<=2000;wu++){
				for(;shi<=1000;shi++){
					for(;wushi<=200;wushi++){
						for(;baiyuan<=100;baiyuan++){
							if(baiyuan*100+wushi*50+shi*10+wu*5+yi==sum) printf("%d\n",baiyuan+wushi+shi+wu+yi);
						}
					}
				}
			}
		}
	}
	return 0;
	
}
