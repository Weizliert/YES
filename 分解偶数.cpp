#include<stdio.h>
int zhi(int x){
int y;
for(y=2;y<x;y++) 
	if(x%y==0) break;
	if(y>=x) return 1;
	else return 0;

}

int main()
{
	int x,z1,z2,i;
scanf("%d",&x);
if(x<6||x%2!=0) {
printf("ERROR");
return 0;
}
for(i=2;i<x/2+1;i++){
	z1=zhi(i);
	z2=zhi(x-i);
	if(z1==1&&z2==1)printf("%d %d\n",i,x-i);
}
return 0;

} 
