#include<stdio.h>
int main()
{
	FILE *ptr;
	int num;
	ptr=fopen("Hello.txt","r");
	if(ptr==NULL)
	{
		printf("File does not exist\n");
	}
	else{
		fscanf(ptr,"%d ",&num);
	printf("The value of num is = %d ",num);
	fclose(ptr);
	}
	
}
