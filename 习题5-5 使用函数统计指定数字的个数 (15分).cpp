#include <stdio.h>
#include <math.h>

int temp(int n){
	int count=0;
	while(n/10!=0){
		n/=10;
		count++;
	} 
	return count;
	
	
}
int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}
int CountDigit( int number, int digit ){
	int count=temp(number);
	int f=0;
	for (int i=1;i<=count;i++){
		double m;
		double h=10;
		double g=(count-i)*1.0;
		m=number%(pow(h,g));
		if (m=digit){
			f++;
		}
		number/=10;
	}
	return f;
}
//int temp(int n){
//	int count=0;
//	while(n/10!=0){
//		n=/10;
//		count++;
//	} 
//	return count;
//	
//	
//}
