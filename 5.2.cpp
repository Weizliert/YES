#include<stdio.h>
int main(void){
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		int a;
		scanf("%d",&a);
		int b=a/2;
		int c=0;
					int d=a;
		for(int j=2;j<b+1;j++){

			if(a%j==0&&a!=j){				
				printf("%d*",j);
				a/=j;j--;c++;
			}
			else if(a==j&&a%j==0){
				printf("%d",j);
				a/=j;j--;c++;
			}
			
		}
		if(c==0){
				printf("%d",d);
			}
		printf("\n");
	}
	return 0;
} 
