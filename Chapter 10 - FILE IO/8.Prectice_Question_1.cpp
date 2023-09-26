#include<stdio.h>
int main()
{
	FILE *ptr;
	int n;
	ptr=fopen("Hello.txt","r");
	int a,b,c;
	fscanf(ptr,"%d %d %d",&a,&b,&c);
	printf("The values of a b and c is %d %d %d ",a,b,c);
	fclose(ptr);
	return 0;
}
