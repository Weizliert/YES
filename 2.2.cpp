#include <stdio.h>
#include<string.h>
int main(void){
	int n;
	scanf("%d",&n);
	if(n<0) {return 0;}	
getchar();
	char str[200];
	gets(str);
			int b,i,j;
	b=strlen(str);
	
	 
	for(i=0;i<n;i++){
		
		printf("%c",str[i+b-n]);
	}
	for(i=n;i<b;i++){
		printf("%c",str[i-n]) ;}
		return 0;
	}
	
	
	
