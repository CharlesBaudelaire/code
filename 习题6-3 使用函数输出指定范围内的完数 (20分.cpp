#include <stdio.h>
#include <math.h>
#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
	
int main()
{
    int  m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

int factorsum( int number ){
	int sum=1; 
	for (int i=2;i<=(number/2);i++){
		if(number%i==0) sum+=i;
		
	}
	return sum;
}
void PrintPN( int m, int n ){
	int count=0;
	for(int i=m;i<=n;i++){
		int sum =factorsum(i);
//		if (i==1){printf("1 = 1\n");
//		} 
		if (sum==i){
			printf("%d = 1 ",sum);
			for(int g=2;g<i;g++){
				if (sum%g==0){
					printf(" + %d",g);
				}
			}
					printf("\n");
		count=1;
		}
		
	}
	if(count==0){printf("No perfect number");
	}
}
