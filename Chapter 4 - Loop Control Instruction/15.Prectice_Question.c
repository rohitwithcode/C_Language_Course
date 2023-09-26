#include<stdio.h>
int main()
{
	
	int n,fact=1;
	printf("Enter number = ");
	scanf("%d",&n);
	int i=n;
	for(;i>=1;i--){
		fact=fact*i;
	}
	printf("%d factorial is %d",n,fact);
	return 0;
}
