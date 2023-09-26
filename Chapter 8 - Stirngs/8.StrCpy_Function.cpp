#include<stdio.h>
#include<string.h>
int main()
{
	char *p="Rohit";
	char ptr[55];
	strcpy(ptr,p);
	printf("%s",ptr);
	return 0;
}
