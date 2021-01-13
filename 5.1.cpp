#include<stdio.h>
int main (){
	int n;
	scanf("%d",&n);
for(int i=0;i<n;i++){	int a;	
		scanf("%d",&a);
	int	j=a;
		int sum=0;
		while(j){
			sum=sum*10+j%10;
			j/=10;
		}
		if(sum==a)printf("yes\n");
		else printf("no\n");
	}
	return 0;
} 
