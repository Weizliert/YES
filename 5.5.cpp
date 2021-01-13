#include<stdio.h>
int main(void){
	int m,n;
	scanf("%d %d",&m,&n);
	int a[m],b[n],c[m+n];
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(int j=0;j<m;j++){
		c[j]=a[j];
	}
	for(int j=m,i=0;j<m+n;j++,i++){
		c[j]=b[i];
	}
	for(int i=0;i<m+n;i++){
		for(int j=0;j<m+n-1-i;j++){		
		if(c[j]>c[j+1]){
			int k;k=c[j];c[j]=c[j+1];c[j+1]=k;
		}}
	}
	for(int i=0;i<m+n;i++){
		printf("%d ",c[i]);
	}
	return 0;
} 
