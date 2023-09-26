#include<stdio.h>
int main(){
	char str[50];
	char str1[50];
	printf("Enter the string = ");
	scanf("%s",str);
	
	char c;
	int i=0;
	scanf("%c",&c);
	while(c!='\0'){
		fflush(stdin);
		scanf("%c",&c);
		str1[i]=c;
		i++;
	}
	str1[i]='\0';
	
	printf("The value of string 1 is %s = ",str);
	printf("The value of string 2 is %s = ",str1);
	return 0;
}
