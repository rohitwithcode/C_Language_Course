#include<stdio.h>
struct employee{
	int id;
	float salary;
	char name[50];
};
int main()
{
	struct employee e={100,343.34,"Rohit"};
//	struct employee e={0	};
	printf("Id of employee = %d \n",e.id);
	printf("Salary of employee = %.2f \n",e.salary);
	printf("Name of employee = %s \n",e.name);
	return 0;
}
