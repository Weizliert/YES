#include<stdio.h>
#include<string.h>
void proc()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a>0&&b>0&&c>0)&&(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a))
	{
		printf("Yes\n");
	}
	else printf("No\n");
}
int main (void){
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		proc();
} 
}
