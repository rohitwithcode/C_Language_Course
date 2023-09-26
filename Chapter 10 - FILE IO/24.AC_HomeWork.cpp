#include<stdio.h>
int main()
{
	FILE *ptr;
	int marks;
	char name[40];
	float per;
	char course[40];
	fopen("Stu.txt","w");
	
	for(int i=0;i<1;i++){
		printf("Enter the %d student name = ",i+1);
		scanf("%s",name);
		printf("Enter the %d student marks = ",i+1);
		scanf("%d",&marks);
		printf("Enter the %d student percentage = ",i+1);
		scanf("%f",&per);
		printf("Enter the %d student course = ",i+1);
		scanf("%s",course);
		fprintf(ptr,"Name  = %s\t",name);
		fprintf(ptr,"Marks  = %d\t",marks);
		fprintf(ptr,"Percentage  = %f\t",per);
		fprintf(ptr,"Course  = %s\n",course);	
		
	}
//	for(int i=0;i<1;i++){
//		fprintf(ptr,"Name  = %s\t",name);
//		fprintf(ptr,"Marks  = %d\t",marks);
//		fprintf(ptr,"Percentage  = %f\t",per);
//		fprintf(ptr,"Course  = %s\n",per);	
//	}
	
	fclose(ptr);
	return 0;
}
