#include<stdio.h>
void Aquerence(char arr[],char c){
	char *ptr=arr;
	int present=0;
	while(*ptr!='\0'){
		if(*ptr==c){
			present=1;
			break;
		}
		ptr++;
	}
	if(present==1){
		printf("Character %c is available in string",c);
	}
	else{
		printf("Character %c not available in string",c);
	}
}
int main()
{
	char arr[]="Rohit Coder LCECPC";
	printf("Enter your given a single character = ");
	char c;
	scanf("%c",&c);
	Aquerence(arr,c);
	return 0;
}
