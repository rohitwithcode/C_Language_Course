#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("generated.txt","w");
	int number=45;
	fprintf(ptr,"The number is = %d ",number);
	fclose(ptr);
	return 0;
}
