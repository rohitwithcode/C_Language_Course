#include<stdio.h>
struct employee{
	int id;
	float salary;
	char name[50];
};
void show(struct employee e[])
{
	for(int i=0;i<3;i++){
		printf("Id of employee %d = %d \n",i+1,e[i].id);
		printf("Salary of employee %d = %.2f \n",i+1,e[i].salary);
		printf("Name of employee %d = %s \n",i+1,e[i].name);
	}
	printf("Thank you\n");
}
int main()
{
	struct employee e[3];
	for(int i=0;i<3;i++){
		printf("Enter the number %d id = ",i+1);
		scanf("%d",&e[i].id);
		printf("Enter the number %d salary = ",i+1);
		scanf("%f",&e[i].salary);
		printf("Enter the number %d Name = ",i+1);
		scanf("%s",&e[i].name);
	}
	show(e);
	return 0;
}
