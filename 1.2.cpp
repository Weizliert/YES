#include<stdio.h>
#define N 50
#define M 5
int main (void){

int a[N][M], j, i;
for(i=0;i<N;i++)  {
scanf("%d %d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
if(a[i][0]==0&&a[i][1]==0&&a[i][2]==0&&a[i][3]==0&&a[i][4]==0)
break;
}
for(j=0;j<i;j++){
	if(a[j][0]+a[j][2]==a[j][1]*2&&a[j][1]+a[j][3]==a[j][2]*2&&a[j][2]+a[j][4]==a[j][3]*2)
	printf("case one\n%d %d %d %d %d\n",a[j][4]+a[j][1]-a[j][0],a[j][4]+a[j][2]-a[j][0],a[j][4]+a[j][3]-a[j][0],a[j][4]+a[j][4]-a[j][0],a[j][4]*2+a[j][1]-a[j][0]*2);
	 if(a[j][0]*a[j][2]==a[j][1]*a[j][1]&&a[j][1]*a[j][3]==a[j][2]*a[j][2]&&a[j][2]*a[j][4]==a[j][3]*a[j][3])
	printf("case two\n%d %d %d %d %d\n",a[j][4]*a[j][1]/a[j][0],a[j][4]*a[j][2]/a[j][0],a[j][4]*a[j][3]/a[j][0],a[j][4]*a[j][4]/a[j][0],a[j][4]*a[j][4]/a[j][0]*a[j][1]/a[j][0]);
	 if(a[j][0]+a[j][1]==a[j][2]&&a[j][1]+a[j][2]==a[j][3]&&a[j][2]+a[j][3]==a[j][4])
	printf("case three\n%d %d %d %d %d\n",a[j][3]+a[j][4],a[j][3]+a[j][4]*2,a[j][3]*2+a[j][4]*3,a[j][3]*3+a[j][4]*5,a[j][3]*5+a[j][4]*8);
}
return 0;
}
