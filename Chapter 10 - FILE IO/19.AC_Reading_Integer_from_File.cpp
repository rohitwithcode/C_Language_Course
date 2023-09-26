#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("Text.txt","r");
	int n;
	n=fscanf(ptr,"%d",&n);
	while(n != EOF){
		printf("%d ",n);
		n=fscanf(ptr,"%d",&n);
	}
	fclose(ptr);
	return 0;
}
