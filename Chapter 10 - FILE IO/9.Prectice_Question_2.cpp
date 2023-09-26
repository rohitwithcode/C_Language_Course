#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("Table.txt","w");
	printf("Enter the table number = ");
	int n;
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		fprintf(ptr,"%d X %d = %d \n",n,i,n*i);
	}
	fclose(ptr);
	return 0;
}
