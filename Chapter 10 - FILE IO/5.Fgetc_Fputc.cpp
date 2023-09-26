#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("getc.txt","r");
	char c=getc(ptr);
	while(c != EOF)
	{
		printf("%c",c);	
		c=fgetc(ptr);
	}
		fclose(ptr);
	return 0;
}
