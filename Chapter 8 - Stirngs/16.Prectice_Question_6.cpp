#include<stdio.h>
void encrypt(char arr[]){
	char *ptr=arr;
	while(*ptr!='\0'){
		*ptr=*ptr-1;
		ptr++;
	}
}
int main()
{
	char arr[]="Spiju!Zbebw!gspn!lvokbmqvs";
	encrypt(arr);
	printf("Dycrepted string is = %s  ",arr);
	return 0;
}
