#include<stdio.h>
float average(int a,int b,int c){
	return (float)(a+b+c)/3;
}
int main()
{
	int a,b,c;
	printf("Enter the first number = ");
	scanf("%d",&a);
	printf("Enter the second number = ");
	scanf("%d",&b);
	printf("Enter the third number = ");
	scanf("%d",&c);
	
	float ave=average(a,b,c);
	printf("Average of %d %d or %d is %f ",a,b,c,ave);
	return 0;
}
