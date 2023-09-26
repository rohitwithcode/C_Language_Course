#include<stdio.h>
int main()
{
	int a=4;
	int *ptr=&a;
	printf("The address of %d is %u \n",a,ptr);
	printf("The value of a is %d ",*ptr);
	return 0;
}
