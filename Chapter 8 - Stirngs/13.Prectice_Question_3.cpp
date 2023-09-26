#include<stdio.h>
void slice(char arr[],int m,int n){
	int i=0;
	while((m+i)<n){
		arr[i]=arr[i+m];
	i++;
	}
	arr[i]='\0';
}
int main()
{
	char st[]="Rohit";
	slice(st,1,4);
	printf("%s",st);
	return 0;
}
