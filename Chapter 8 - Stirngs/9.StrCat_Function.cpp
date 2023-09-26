#include<stdio.h>
#include<string.h>
int main()
{
	char p[55]="Yadav ";
	char *ptr="Rohit";
	strcat(p,ptr);
	printf("%s",p);
	return 0;
}
