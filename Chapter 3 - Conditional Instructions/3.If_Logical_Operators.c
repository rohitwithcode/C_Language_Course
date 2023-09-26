#include<stdio.h>
int main()
{
	printf("Enter age =");
	int age;
	scanf("%d",&age);
	if(age<=60 && age>=18){
		printf("you can drive\n");
	}else{
		printf("You can not drive");
	}
	return 0;	
}
