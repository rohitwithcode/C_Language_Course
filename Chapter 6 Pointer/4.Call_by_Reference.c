#include<stdio.h>

void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void w_swap(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	
}
int main()
{
	int a=4,b=2;
	printf("The value of the a,b before the swap is %d and %d \n",a,b);
	w_swap(a,b);
	printf("The value of the %d or %d after is the swap %d and %d \n",a,b,a,b);
	
	
	swap(&a,&b);
	printf("The value of the %d or %d after is the swap %d and %d \n",a,b,a,b);
	return 0;
}
