#include <stdio.h>
#define PI 3.14159
int main(void){
    double radius,length;
    double area,volume;
    scanf("%lf%lf",&radius,&length);
    area=PI*radius*radius;
    volume=area*length;
    printf("%f\n",volume);
    return 0;
}
