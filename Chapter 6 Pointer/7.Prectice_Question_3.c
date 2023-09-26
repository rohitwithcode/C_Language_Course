#include<stdio.h>
void printValue(int *ptr)
{
	*ptr=*ptr*10;
}
int main()
{
	int a=4;
	printValue(&a);
	printf("The value of a is %d ",a);
	return 0;
}
