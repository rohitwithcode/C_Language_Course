#include<stdio.h>
int main()
{
	int sum=0;
	int i=1;
	while(i<=10){
		printf("%d ",i);
		sum=sum+i;
		i++;
	}
	printf("= %d ",sum);
	return 0;
}
