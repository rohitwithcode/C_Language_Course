#include<stdio.h>

typedef struct employee
{
	int salary;
	char name[50];
}E;
int main()
{
	E e;
	FILE *ptr;
	ptr=fopen("Q4.txt","w");
	for(int i=0;i<2;i++)
	{
		printf("Enter the Name of the employee %d ",i+1);
	scanf("%s",&e.name);
	printf("Enter the salary of the employee %d ",i+1);
	scanf("%d",&e.salary);
	fprintf(ptr,"%s , ",e.name);	
		fprintf(ptr,"%d\n",e.salary);
	}
	fclose(ptr);
	
	return 0;
}
