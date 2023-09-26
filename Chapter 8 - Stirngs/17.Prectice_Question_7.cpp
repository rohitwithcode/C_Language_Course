#include<stdio.h>
int Aquerence(char arr[],char c){
	int count=0;
	char *ptr=arr;
	while(*ptr!='\0'){
		if(*ptr==c){
			count++;
		}
		ptr++;	
	}
	return count;
}
int main()
{
	char arr[]="Rohit Coder LCECPC";
	printf("Enter your given a single character = ");
	char c;
	scanf("%c",&c);
	int a=Aquerence(arr,c);
	printf("The total number of %c is %d ",c,a);
	return 0;
}
