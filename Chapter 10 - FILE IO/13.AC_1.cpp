#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("Text.txt","r");
	char c;
	fscanf(ptr,"%c",&c);
	printf("Character = %c",c);
	fclose(ptr);
	return 0;
}
