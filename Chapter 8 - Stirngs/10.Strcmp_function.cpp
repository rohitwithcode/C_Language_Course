#include<stdio.h>
#include<string.h>
int main()
{
	char p[55]="Yadav ";
	char *ptr="Rohit";
	int a=strcmp(p,ptr);
	printf("%d",a);
	return 0;
}
