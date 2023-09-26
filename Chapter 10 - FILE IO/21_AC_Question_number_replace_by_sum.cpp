#include<stdio.h>
int main()
{
	FILE *ptr,p;
	int a,b;
	ptr=fopen("sum.txt","r");
	fscanf(ptr,"%d",&a);
	fscanf(ptr,"%d",&b);
	printf("%d %d",a,b);
	int c=a+b;
	fclose(ptr);
	ptr=fopen("sum.txt","w");
	fprintf(ptr,"%d",c);
	fclose(ptr);
	return 0;
}
