#include<stdio.h>
int main()
{
	
	int n,fact=1;
	printf("Enter number = ");
	scanf("%d",&n);
	int i=n;
	while(i>=1){
		fact=fact*i;
		i--;
	}
	printf("%d factorial is %d",n,fact);
	return 0;
}
