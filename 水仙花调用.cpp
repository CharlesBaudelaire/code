#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic( int number ){
	int count=0;
	int c=number;
	while(c>0){
		c/=10;
		count++;
	}
	
	int sum=0;
	
	for(int i=1;i<=count;i++){
		int m=number%10;
		int q=m;
		for (int g=1;g<count;g++){
			q*=m;
		}
		sum+=q;
		number/=10;
	}
	if (sum==number){
		return 1;
	}
    else return 0;
}
void PrintN( int m, int n ){
	for (int i=m;i<=n;i++){
		if(narcissistic(i)){
			printf("%d\n",i);
		}
	}
} 
