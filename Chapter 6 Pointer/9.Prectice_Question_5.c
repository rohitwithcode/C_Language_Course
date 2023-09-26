#include<stdio.h>
void Function(int a,int b,int *sum,int *avg){
	*sum=a+b;
	*avg=(a+b)/2;
}
int main()
{
	int a,b,sum,avg;
	Funtion(a,b,&sum,&avg);
	printf("The sum of %d and %d is ",a,b,sum);
	printf("The avg of %d and %d is ",a,b,avg);
	return 0;
}
