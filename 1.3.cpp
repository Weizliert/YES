#include<stdio.h>
#include<string.h>
int main (void){
int n,i;
scanf("%d",&n);
if(n>=10) return 0;
for(i=0;i<n;i++){
	char* str1="SCU";
	char str2[20];
scanf("%s",str2);
	if (strcmp(str1, str2) == 0) {
	    printf("YES\n",str2);
	}
	else {
	    printf("NO\n");
	}

}
	return 0;
}
