#include<stdio.h>
int sum(int a,int b){
	return a+b;
}
int main()
{
	printf("Enter number=");
	int a;
	scanf("%d",&a);
	printf("Enter number=");
	int b;
	scanf("%d",&b);
	int c=sum(a,b);
	printf("sum of %d or %d is %d",a,b,c);
	return 0;
}
