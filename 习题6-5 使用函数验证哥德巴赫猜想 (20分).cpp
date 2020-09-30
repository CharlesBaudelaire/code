#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

/* 你的代码将被嵌在这里 */
int prime(int p){
int flag=1;
if (p<=1){flag=0;return flag;
}
if (p==2){ flag=1;
return flag;
} 
for (int i=2;i<=(p-1);i++){
if(p%i==0){
flag=0;
}
}
return flag;
}
void Goldbach( int n ){
	for(int i=3;i<=n;i++){
		if (prime(i)==1&&i%2==1){
			if(prime(n-i)==1&&(n-i)%2==1){
			
			printf("%d=%d+%d",n,i,n-i);
			i=n;}
		}
	}
	
}
 
