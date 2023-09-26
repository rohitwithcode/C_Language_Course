#include<stdio.h>

int main()
{
	int n;
	int i=0;
	printf("Enter number ");
	scanf("%d",&n);
	for(;i<n;i++){
		if(i==5){
			continue;
		}
		printf("%d ",i);
	}
	return 0;
}
