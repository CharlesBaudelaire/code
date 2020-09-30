#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}
int fib( int n ){

	int count=2;
	int sum=0;
	int i=1,x=0;
	while(count<=n){
		sum=x+i;
		x=i;
		i=sum;
		count++;
	}
	return sum;
}
void PrintFN( int m, int n ){
//	int count=0;
//	for (int i=m;i<=n;i++){
//	int g=1;
//	for (int q=2;g<m;q++){
//		g=fib(q);
//	}
//	int c=g+1;
//	int x=1;
//	int q=2;
//	for (;x<n;q++){
//		x=fib(q);
//	}
//	int b=q-1;
//	int w=c;
//	for(;w<=b;w++){
//		printf("%d ",fib(w));
//		count=1;
//	}
//	
//	}
//	if (count==1){printf("No Fibonacci number");
//	}
//} 
	int i=1;
	int count=0;
	while (fib(i)<=n){
		if(fib(i)>=m){
			count++;
		
		if (count ==1){
			printf("%d",fib(i));
		}
		else { printf(" %d",fib(i));
		}}
	i++;}
	if (count==0){printf("No Fibonacci number\n");
	}
}
