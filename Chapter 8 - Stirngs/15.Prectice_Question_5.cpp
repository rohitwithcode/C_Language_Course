#include<stdio.h>
void encrypt(char arr[]){
	char *ptr=arr;
	while(*ptr!='\0'){
		*ptr=*ptr+1;
		ptr++;
	}
}
int main()
{
	char arr[]="Rohit Yadav from kunjalpur";
	encrypt(arr);
	printf("Encrepted string is = %s  ",arr);
	return 0;
}
