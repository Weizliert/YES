#include<stdio.h>
#include<string.h>
int main (){
	int n;
	scanf("%d",&n);
	if(n<0||n>=10){
		return 0;
	}
	getchar();
	for(int i=0;i<n;i++){		
	char a[1000];
	gets(a);
	int s1=strlen(a);
	int s2=0,s3=0;	
	for(int j=0;j<s1;j++){
		if(a[j]=='A')  s2++;
		if(a[j]=='S'&&a[j+1]=='C'&&a[j+2]=='U'){
			s2++;s3++;
		}	
	}
	if(s2=s1&&s3>0) printf("YES\n");
	else printf("NO\n");
} 
}
