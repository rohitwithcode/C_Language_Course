#include<stdio.h>
int sum(int a,int b){
	return a+b;
}
int main()
{
	int a=4,b=5;
	printf("The sum of %d and %d is %d",a,b,sum(a,b));
	return 0;
}
