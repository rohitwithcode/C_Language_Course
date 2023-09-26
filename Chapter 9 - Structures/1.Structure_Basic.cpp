#include<stdio.h>
#include<string.h>
struct employee{
	int id;
	float salary;
	char name[50];
};
int main()
{
	struct employee e;
	e.id=4;
	e.salary=44.40;
//	e.name="Rohit";
	strcpy(e.name,"Rohit");
	
	printf("Id of employee = %d \n",e.id);
	printf("Salary of employee = %.2f \n",e.salary);
	printf("Name of employee = %s \n",e.name);
	return 0;
}

