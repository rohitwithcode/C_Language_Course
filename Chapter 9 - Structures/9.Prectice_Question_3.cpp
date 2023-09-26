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
	struct employee *ptr=&e;
	
	ptr->salary=45.66;
	ptr->id=5;
	strcpy(ptr->name,"Rohit");
	printf("%d\n",(*ptr).id);
	printf("%.2f\n",ptr->salary);
	printf("Name = %s",ptr->name);
	return 0;
}
