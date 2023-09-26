#include<stdio.h>
#include<string.h>
typedef struct employee{
	int id;
	float salary;
	char name[50];
}e;
int main()
{
    e e1;
    e1.id=3;
    e1.salary=454.4;
    strcpy(e1.name,"Rohit");
    
	printf("Id of employee = %d \n",e1.id);
	printf("Salary of employee = %.2f \n",e1.salary);
	printf("Name of employee = %s \n",e1.name);
	
	return 0;
}
