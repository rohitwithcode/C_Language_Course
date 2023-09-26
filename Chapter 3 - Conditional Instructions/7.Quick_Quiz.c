#include<stdio.h>
int main()
{
	printf("Enter the number of student ");
	int n;
	scanf("%d",&n);
	if(n>95){
		printf("Grade A\n");
	}else if(n>90 && n<=95){
		printf("Grade B\n");
	}else if(n>80 && n<=90){
		printf("Grade c\n");
	}else if(n>70 && n<=80){
		printf("Grade d\n");
	}
	else{
		printf("You are fail\n");
	}
	return 0;
}
