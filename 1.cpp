#include<stdio.h> 
int main()
{    
int fm=1,N,b=1;    
double item,sum=0,i;        
scanf("%d",&N);    
for(i=1.0;i<=N;i++)    
{        
item=b*(i/fm);        
sum=sum+item;        
b=-b;        

fm=fm+2;    
}                
printf("%.3f\n",sum);         
return 0; 
}
