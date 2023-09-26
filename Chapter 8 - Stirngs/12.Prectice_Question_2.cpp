#include<stdio.h>
int strLength(char arr[]){
	char *ptr=arr;
	int l=0;
	while(*ptr !='\0'){
		l++;
		ptr++;
	}
	return l;
}
int main()
{
	char str[50];
	printf("Enter the string  = ");
	fgets(str,50,stdin);
	int a=strLength(str);
	printf("The length of the string is %d ",a);
	return 0;
}

