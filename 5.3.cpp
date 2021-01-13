#include<stdio.h>
#include<string.h>
int main (void){
	int r;
	scanf("%d",&r);
	getchar();
	for(int i=0;i<r;i++){
	char a[10000];
	gets(a);		
      int m=strlen(a); 
      for(int u=0;u<m;u++){
      	printf("%c",a[u]);
	  }
	  printf(":\n");
	  int b[m];
	  for(int y=0;y<m;y++){
	  	b[y]=a[y]-'0';
	  } 
	int k;
	for( k=0;k<m;k++){
	        if(b[k]==0) printf("*****  ");
			if(b[k]==1) printf("    *  ");
			if(b[k]==2) printf("*****  ");
			if(b[k]==3) printf("*****  ");
			if(b[k]==4) printf("*   *  ");
			if(b[k]==5) printf("*****  ");
			if(b[k]==6) printf("*****  ");
			if(b[k]==7) printf("*****  ");
			if(b[k]==8) printf("*****  ");
			if(b[k]==9) printf("*****  ");		
	}
	printf("\n");
		for( k=0;k<m;k++){		
			if(b[k]==0) printf("*   *  ");
			if(b[k]==1) printf("    *  ");
			if(b[k]==2) printf("    *  ");
			if(b[k]==3) printf("    *  ");
			if(b[k]==4) printf("*   *  ");
			if(b[k]==5) printf("*      ");
			if(b[k]==6) printf("*      ");
			if(b[k]==7) printf("    *  ");
			if(b[k]==8) printf("*   *  ");
			if(b[k]==9) printf("*   *  ");
		}	
		printf("\n");
		for( k=0;k<m;k++){		
			if(b[k]==0) printf("*   *  ");
			if(b[k]==1) printf("    *  ");
			if(b[k]==2) printf("    *  ");
			if(b[k]==3) printf("    *  ");
			if(b[k]==4) printf("*   *  ");
			if(b[k]==5) printf("*      ");
			if(b[k]==6) printf("*      ");
			if(b[k]==7) printf("    *  ");
			if(b[k]==8) printf("*   *  ");
			if(b[k]==9) printf("*   *  ");
	}
		printf("\n");
		for( k=0;k<m;k++){
			if(b[k]==0) printf("*   *  ");
			if(b[k]==1) printf("    *  ");
			if(b[k]==2) printf("*****  ");
			if(b[k]==3) printf("*****  ");
			if(b[k]==4) printf("*****  ");
			if(b[k]==5) printf("*****  ");
			if(b[k]==6) printf("*****  ");
			if(b[k]==7) printf("    *  ");
			if(b[k]==8) printf("*****  ");
			if(b[k]==9) printf("*****  ");
	}
		printf("\n");
		for( k=0;k<m;k++){
			if(b[k]==0) printf("*   *  ");
			if(b[k]==1) printf("    *  ");
			if(b[k]==2) printf("*      ");
			if(b[k]==3) printf("    *  ");
			if(b[k]==4) printf("    *  ");
			if(b[k]==5) printf("    *  ");
			if(b[k]==6) printf("*   *  ");
			if(b[k]==7) printf("    *  ");
			if(b[k]==8) printf("*   *  ");
			if(b[k]==9) printf("    *  ");
	}
			printf("\n");
		for( k=0;k<m;k++){
			if(b[k]==0) printf("*   *  ");
			if(b[k]==1) printf("    *  ");
			if(b[k]==2) printf("*      ");
			if(b[k]==3) printf("    *  ");
			if(b[k]==4) printf("    *  ");
			if(b[k]==5) printf("    *  ");
			if(b[k]==6) printf("*   *  ");
			if(b[k]==7) printf("    *  ");
			if(b[k]==8) printf("*   *  ");
			if(b[k]==9) printf("    *  ");
	}
	printf("\n");
	for( k=0;k<m;k++){
			if(b[k]==0) printf("*****  ");
			if(b[k]==1) printf("    *  ");
			if(b[k]==2) printf("*****  ");
			if(b[k]==3) printf("*****  ");
			if(b[k]==4) printf("    *  ");
			if(b[k]==5) printf("*****  ");
			if(b[k]==6) printf("*****  ");
			if(b[k]==7) printf("    *  ");
			if(b[k]==8) printf("*****  ");
			if(b[k]==9) printf("*****  ");
	}
	printf("\n");	 
	}
	return 0;
} 
