#include<stdio.h>
int main (void){
	int n;
	int sum;
	scanf("%d",&n);
	int a[n];
	int i,j;
	for(i=0;i<n;i++){		
		scanf("%d",&a[i]);
		j=a[i];
		int sum=0;
		while(j){
			sum=sum*10+j%10;
			j/=10;
		}
		if(sum==a[i]) printf("YES\n");
		else printf("NO\n");		
	}
	return 0;
}
