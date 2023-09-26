#include<stdio.h>
int main()
{
	printf("Enter age =");
	int age;
	scanf("%d",&age);
	if(age>=60){
		printf("You are above 60,you can not drive\n");
	}else{
		printf("You can drive");
	}	
}
