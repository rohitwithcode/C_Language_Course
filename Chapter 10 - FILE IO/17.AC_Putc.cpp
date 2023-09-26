#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("Text.txt","w");
	
	putc('R',ptr);
	fclose(ptr);
	return 0;
}
