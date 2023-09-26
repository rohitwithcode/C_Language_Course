#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("getc.txt","r");
	char c;
	c=fscanf(ptr,"%c",&c);
	while(c != EOF)
	{
		printf("%c",c);	
		c=fgetc(ptr);
	}
		fclose(ptr);
	return 0;
}
