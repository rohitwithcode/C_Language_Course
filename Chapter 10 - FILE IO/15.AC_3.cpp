#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("Text.txt","w");
	char c;
	fprintf(ptr,"%c",'R');
	fprintf(ptr,"%c",'O');
	fprintf(ptr,"%c",'H');
	fprintf(ptr,"%c",'I');
	fprintf(ptr,"%c",'T');
	
	fclose(ptr);
	return 0;
}
