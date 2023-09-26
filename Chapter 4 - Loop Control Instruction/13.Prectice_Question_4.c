#include<stdio.h>
int main()
{
	int sum=0;
	int i=1;
	do{
		printf("%d ",i);
		sum=sum+i;
		i++;
	}while(i<=10);
	printf("= %d ",sum);
	return 0;
}
