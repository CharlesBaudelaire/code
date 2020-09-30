#include <stdio.h>
#include <math.h> 
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    double sum=1;
    while(m<=n)
    {
        sum+=(pow(m,2)+1.0/m);
        m++;
    }
    printf("sum = %.6f",sum);
    
}
