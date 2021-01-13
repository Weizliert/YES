#include<stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	int a[n];
	float m,sum;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	m=sum/n;
	printf("%d\n",sum);
	printf("%.2f",m);
	return 0;
}
