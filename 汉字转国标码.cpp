#include<stdio.h>
int main (void){
	int i,len;
	unsigned char BM[100];
	char str[200];
	printf("ºº×Ö");
	scanf("%s",BM);
	for(len=0;BM[len]!='\0';len++);
	for(i=0;i<len;i++)
	printf("BM[%d]=%x\n",i,BM[i]);
	for(i=0;i<len;i++)
	sprintf(str+2*i,"%x",BM[i]);
	for(i=0;i<len;i++)
	printf("%c",str[i]);
	return 0; 
} 
