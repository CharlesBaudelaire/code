#include <stdio.h>
double fact(int n)
{
	double sum=1.0;
	for (;n>0;n--){
		sum*=n;
	}
	return sum;
}
int main()
{
	int n,m;
	n=0;
	m=0;
	double result=1.0; 
	scanf("%d %d",&m,&n);
	result=fact(n)/(fact(m)*fact(n-m));
	printf("result = %.01f",result);
	return 0;
	
}


