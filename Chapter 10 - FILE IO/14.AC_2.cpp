#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("Text.txt","r");
	int c;
	c=fscanf(ptr,"%d",&c);
	printf("Character = %d",c);
	fclose(ptr);
	return 0;
}
