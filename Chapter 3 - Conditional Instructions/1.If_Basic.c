#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the number ");
	scanf("%d",&a);
	if(a%2==0){
		printf("Even Number is %d\n",a);
	}else{
		printf("Odd Number is %d\n",a);
	}
	return 0;
}

