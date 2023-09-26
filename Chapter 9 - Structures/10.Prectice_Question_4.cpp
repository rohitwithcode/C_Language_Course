#include<stdio.h>
typedef struct array
{
	int real;
	int complex;
}A;
void display(A arr)
{
	printf("The value of of real part is %d \n",arr.real);
	printf("The value of of imaginary part is %d \n",arr.complex);
}
int main()
{
	A a[5];
	
	for(int i=0;i<5;i++){
		printf("Enter the Real No. %d index values = ",i+1);
		scanf("%d",&a[i].real);
		printf("Enter the Complex No. %d index values = ",i+1);
		scanf("%d",&a[i].complex);
	}
	for(int i=0;i<5;i++){
		display(a[i]);
	}
	return 0;
}

