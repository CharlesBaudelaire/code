#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
			int i,j,k;
			int n;
			scanf("%d",&n);
            i = n / 100;                    //��λ
            j = (n - i * 100) / 10;         //ʮλ
            k = n - i * 100 - j * 10;       //��λ
            if (i * i * i + j * j * j + k * k * k == n)    printf("YES");
            else printf("NO");
            return 0;
                           
}
