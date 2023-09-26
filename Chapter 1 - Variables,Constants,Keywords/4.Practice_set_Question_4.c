#include<stdio.h>
int main()
{
	int p,t,r;
	printf("Enter the principle = ");
	scanf("%d",&p);
	printf("Enter the time = ");
	scanf("%d",&t);
	printf("Enter the rate = ");
	scanf("%d",&r);
	
	printf("The simple interest is %d ",(p*r*t)/100);
	return 0;
}
