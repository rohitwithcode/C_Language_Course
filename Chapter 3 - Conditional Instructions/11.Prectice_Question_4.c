#include<stdio.h>
int main()
{
	char c;
	printf("Enter character ");
	scanf("%c",&c);
	int a=(int)c;
	if(a>=97 && a<=122){
		printf("ASCII value of Character %c is %d in lowerCase ",c,a);
	}
	else{
		printf("Character %c is not LowerCase ASCII value of char is %d ",c,a);
	}
}
