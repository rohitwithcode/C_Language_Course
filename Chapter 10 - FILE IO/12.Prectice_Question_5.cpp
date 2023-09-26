#include<stdio.h>
int main()
{
	FILE *ptr=fopen("Q5.txt","r");
	FILE *ptr1=fopen("Q5.txt","w");
	int c;
	c=fscanf(ptr,"%d",&c);
	while(c != EOF)
	{
		fprintf(ptr1,"%d ",c*2);
		c=fscanf(ptr,"%d",&c);
	}
	fclose(ptr);
	fclose(ptr1);
	return 0;
}

