#include <stdio.h>

void pyramid( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}

void pyramid( int n ){
	for (int i=1;i<=n;i++){
		for (int f=1;f<=n-i;f++){
			printf(" ");
		}
		for (int f=n-i;f<=n-1;f++){
			printf("%d ",i);
		}
		printf("\n");
	}

}
