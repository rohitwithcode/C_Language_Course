#include<stdio.h>
struct employee{
	int id;
	float salary;
	char name[50];
};
int main()
{
	struct employee e;
	struct employee *ptr=&e;
	
	(*ptr).id=100;
	ptr->salary=45.66;
	printf("%d\n",(*ptr).id);
	printf("%.2f\n",ptr->salary);
	return 0;
}

