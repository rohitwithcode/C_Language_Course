#include<stdio.h>
int main()
{
	int a=4;
	int *ptr=&a;
	int **ptr1=&ptr;
	printf("\n\nThe addresses from here ......\n\n");
	printf("The address of a is %u \n",&a);
	printf("The address of a is %u \n",ptr);
	printf("The address of ptr is %u \n",&ptr);
	printf("The address of ptr is %u \n",ptr1);
	printf("The address of a is %u \n",*(&ptr));
	printf("The address of **ptr is %u \n",ptr1);
	
	
	printf("\n\nThe values from here ......\n\n");
	printf("The value of a is %d \n",a);
	printf("The value of a is %d \n",*ptr);
	printf("The value of a is %d \n",**ptr1);
	printf("The value of a is %d \n",*(&a));
	
	
	return 0;
}

