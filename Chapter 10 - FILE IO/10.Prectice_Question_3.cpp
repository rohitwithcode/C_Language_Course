#include<stdio.h>
int main()
{
	FILE *ptr,*ptr1;
	ptr=fopen("Table.txt","r");
	char c;
	c=fgetc(ptr);
	ptr1=fopen("Q3.txt","w");
	
	
	while(c != EOF)
	{
//		fprintf(ptr1,"%c",c); fprint is use for int float double
//		fprintf(ptr1,"%c",c);
		putc(c,ptr1);
//		putc(c,ptr1);
		c=fgetc(ptr);
	}
//	while(c != EOF)
//	{
//		putc(c,ptr1);
//		c=fgetc(ptr);
//	}
	fclose(ptr);
	fclose(ptr1);
	
	return 0;
}
