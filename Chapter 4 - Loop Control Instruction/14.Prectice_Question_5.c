#include<stdio.h>
int main()
{
	printf("Enter the table number = ");
	int n,sum;
	scanf("%d",&n);
	int i=10;
	while(i>=1){
		printf("%d X %d = %d\n",n,i,n*i);
		sum=sum+(n*i);
		i--;
	}
	printf("The sum of %d number table is %d ",n,sum);
	return 0;
}
