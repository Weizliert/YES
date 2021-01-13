#include<stdio.h>
#include<math.h>
int main (){
int n;
scanf("%d",&n);
if(n>100||n<1){
	return 0;
}
getchar();
char a[100000];
char ch;
int len;
while((ch=getchar())!='\n'){
	a[len]=ch;len++;
}
int b[1000];
int c[1000]={0};int k=0;
int len1=0;
for(int i=len;i>=0;i--){
	int j=0;
while(a[i]>='0'&&a[i]<='9'){
b[j]=a[i]-'0';c[k]+=b[j]*pow(10,j);j++;i--;	
}
if(j>0)k++;
if(a[i]=='n'&&a[i+1]=='/'&&a[i+2]=='a'){
len1++;	
}	
}
int x=0;float y,f;
for(int h=0;h<n;h++){
x+=c[h];	
}
f=x;
if(len1==n){
	printf("n/a");
}
else {
	y=f/(n-len1);
printf("%.2f",y);
}
return 0;
}
