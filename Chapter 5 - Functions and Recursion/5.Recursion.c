#include<stdio.h>
int factorial(int n){
	if(n==0 || n==1){
		return 1;
	}
	return factorial(n-1)*n;
}
int main()
{
	printf("Enter number = ");
	int a;
	scanf("%d",&a);
	int f=factorial(a);
	printf("The value of %d is %d ",a,f);
	return 0;
}

