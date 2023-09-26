#include<stdio.h>
void printAdd(int a){
	printf("The address of a is %u ",&a);
}
int main()
{
	int i=3;
	printf("The address of i is %u \n",&i);
	printAdd(i);
	return 0;
}
