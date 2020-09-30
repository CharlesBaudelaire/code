#include <stdio.h>
#include <math.h>
int main(){
	int m,n;
	int a[1000];
	int b[1000];
	int flag=0;
	int w[1000];
	
	int count=0;
	int f=0;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf(" %d",&a[i]);
	}

	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf(" %d",&b[i]);
	}
	for (int i=0;i<m;i++){flag=0;
		for (int c=0;c<n;c++){
			if (a[i]==b[c]){
				flag=1;
			} 
			
			}	if(flag==0){
				
				
				for(int r=0;r<count;r++){
					if (w[r]==a[i]){f=1;
					}
					
				}
				if(f==0){w[count]=m;
				}
				count++;
			printf("%d ",a[i]);
			f=0;
		}
	}
	flag=0;
	for (int c=0;c<n;c++){flag=0;
		for (int i=0;i<m;i++){
			if (b[c]==a[i]){
				flag=1;
			} 
			
			}
		if(flag==0){m=b[c];
				
				for(int r=0;r<count;r++){
					if (w[r]==m){f=1;
					}
					
				}
				if(f==0){w[count]=m;
				}
				count++;
			
			f=0;
			printf("%d ",w[c]);}
	}return 0;
}
