#include<stdio.h>
int main()
{
	FILE *ptr;
	int num;
	ptr=fopen("Hello.txt","r");
	fscanf(ptr,"%d ",&num);
	printf("The value of num is = %d ",num);
	fclose(ptr);
}
