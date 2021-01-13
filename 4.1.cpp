#include<stdio.h>
int main() {
int a[50]={0};
int n;
for(n=1,scanf("%d",&a[n-1]);getchar()!='\n';n++){
	scanf("%d",&a[n]);
}
for(int i=0;i<50;i++){
	printf("%d\n",a[i]);
}
	return 0;
}
