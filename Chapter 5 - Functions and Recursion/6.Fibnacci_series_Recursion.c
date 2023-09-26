#include<stdio.h>
int fib(int n){
	if(n<=1){
		return n;
	}
	return fib(n-1)+fib(n-2);
}
int main()
{
	printf("Enter number = ");
	int a;
	scanf("%d",&a);
	int f=fib(a);
	printf("The value of %d is %d ",a,f);	
	return 0;
}
