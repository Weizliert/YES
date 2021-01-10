#include<stdio.h>
#include<math.h>
int main(void){
	int m;
	scanf("%d",&m);
	if(m>20||m<0){return 0;	}
	int i,max;
	max=0;
	int h;
	int a[m];
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
		int k;
		k=abs(a[i]);
		if(k>max){
		
		max=abs(a[i]);
		h=a[i];}
	}
	printf("%d",h);
	return 0;		
	}
	

