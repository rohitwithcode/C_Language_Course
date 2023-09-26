#include<stdio.h>
int main()
{
	int arr[10];
	printf("Enter table name = ");
	int n;
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		printf("%d X %d = %d\n",5,n,n*i);
	}
	return 0;
}
