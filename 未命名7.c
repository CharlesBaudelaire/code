#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
			int i,j,k;
			int n;
			scanf("%d",&n);
            i = n / 100;                    //百位
            j = (n - i * 100) / 10;         //十位
            k = n - i * 100 - j * 10;       //个位
            if (i * i * i + j * j * j + k * k * k == n)    printf("YES");
            else printf("NO");
            return 0;
                           
}
