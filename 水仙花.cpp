#include <stdio.h>
#include <math.h> 
int main()
{
	int a,c,d,i;
	scanf("%d",&a);
	c=1;
	d=1;
	while (c<a){
		d*=10;
		c++;
	}
	printf("%d\n",d);
	i=d;
	while (i<d*10){
		int sum=0;
		int t=i;
		while (t>0){       
			int n;
			n=t%10;
			t/=10;
			int f =1;
			int g;
			g=n;
			while (f<a){
				g*=n;
				f++;
			}
			sum+=g;
			
		}
		if (i==sum){
			printf("%d\n",i);
		}
		i++;
	} 
	
	
	return 0;
}
