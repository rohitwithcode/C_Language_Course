#include<stdio.h>
int main()
{
	char str[]={'R','O','H','I','T','\0'};
//	char str1[]="Rohit";
	char *c=str;
	while(*c != '\0'){
		printf("%c",*c);
		*c++;
	}
	
}
