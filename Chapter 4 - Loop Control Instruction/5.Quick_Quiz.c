#include<stdio.h>
int main()
{
	int a,i=0;
	printf("Enter number ");
	scanf("%d",&a);
	do{
		printf("%d ",i);
		i++;
	}while(i<a);
}
