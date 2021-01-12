#include <stdio.h>
int year(int n,int k ,int a){

if(n==1){return k;} 
else return a+year(n-1,k,a);
}
int main (){
	int n,a,k;
	scanf("%d %d %d",&n,&a,&k);
	if(k>0&&a>0&&n>=2&&k<=100&&n>0&&a<=100&&n<=100)
{
		printf("%d",year(n,k,a));return 0;}
	else
	printf("Wrong Number");
	return 0;
}	
