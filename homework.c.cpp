#include <stdio.h>
int main(){
	int j=0;
	char a[10];
	gets(a);
switch(a[0]){
	case 0xffffffd0: a[1]=a[0];break;
	case 0xffffffcc: a[1]=a[0];break;
	case 0xffffffc1: a[1]=0xffffffcb;break;
} 
switch(a[1]){

case 0xffffffa8:printf("E5B79D");break;
case 0xffffffa5:printf("E8B1AB");break;
case 0xffffffe3:printf("E6B599");break;
case 0xffffffd5:printf("E88B8F");break;
case 0xffffffb3:printf("E9B281");break;
case 0xffffffee:printf("E79A96");break;
case 0xfffffff6:printf("E997BD");break;
case 0xfffffff5:printf("E98482");break;
case 0xfffffff0:printf("E6A182");break;
case 0xffffffca:printf("E78498");break;
case 0xfffffffa:printf("E6998B");break;
case 0xffffffc9:printf("E89299");break;
case 0xffffffc2:printf("E99995");break;
case 0xffffffaa:printf("E59089");break;
case 0xfffffff3:printf("E8B4B5");break;
case 0xffffffc1:printf("E7B2A4");break;
case 0xffffffe0:printf("E99D92");break;
case 0xffffffd4:printf("E8978F");break;
case 0xfffffffe:printf("E5AE81");break;
case 0xffffffed:printf("E790BC");break;
case 0xffffffd2:printf("E68C82");break;
case 0xffffffa7:printf("E5ADA6");break;
case 0xffffffaf:printf("E8ADA6");break;
case 0xffffffdb:printf("E6B8AF");break;
case 0xffffffc4:printf("E6BEB3");break;
case 0xffffffb9:printf("E4BDBF");break;
case 0xffffffec:printf("E9A286");break;
case 0xffffffa6:printf("E6B2AA");break;
case 0xffffffa9:printf("E4BAAC");break;
case 0xfffffff2:printf("E6B4A5");break;
case 0xffffffe5:printf("E6B89D");break;
case 0xffffffd3:printf("E8B5A3");break;
case 0xffffffda:printf("E9BB91");break;
case 0xffffffbd:printf("E58680");break;
case 0xffffffe6:printf("E6B998");break;
case 0xffffffe1:printf("E6BB87");break;
case 0xffffffd0:printf("E696B0");break;
case 0xffffffcb:printf("E8BEBD");break;
case 0xffffffcc:printf("E58FB0");break;
}
printf("%x%x%x%x%x%x",a[2],a[3],a[4],a[5],a[6],a[7]);
	return 0;
}
