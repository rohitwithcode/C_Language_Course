#include<stdio.h>
int main()
{
	int a=5,b=6;
	int *ptr=&a;
	int *p=&b;
	printf("The address of pointer is %u \n",ptr);
	ptr++;
	printf("The address of pointer is %u \n",ptr);
	ptr=ptr-1;
	printf("The address of pointer is %u \n",ptr);
//	int *c=ptr==p;
	printf("The address of pointer is %u \n",c);
	return 0;
}
