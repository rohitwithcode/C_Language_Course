#include<stdio.h>
int main()
{
	printf("How many table do you want to print = ");
	int a;
	scanf("%d",&a);
	int arr[a][10];
	for(int i=1;i<=a;i++){
		printf("Enter the table number = ");
		int n;
		scanf("%d",&n);
		for(int j=1;j<=10;j++){
			printf("%d X %d = %d\n",n,i,j*n);
		}
	}
}
