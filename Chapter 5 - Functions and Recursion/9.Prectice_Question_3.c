#include<stdio.h>
int sum(int n){
	if(n>0)
	{
		return sum(n-1)+n;
	}
	return;
	 
}
int main()
{
	int n;
	printf("Enter the number = ");
	scanf("%d",&n);
	printf("%d ",sum(n));
	return 0;
}

