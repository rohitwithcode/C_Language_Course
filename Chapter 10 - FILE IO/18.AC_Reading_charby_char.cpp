#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("Text.txt","r");
	char c;
	c=fgetc(ptr);
	while(c != EOF){
		printf("%c",c);
		c=fgetc(ptr);
	}
	putc('R',ptr);
	fclose(ptr);
	return 0;
}
