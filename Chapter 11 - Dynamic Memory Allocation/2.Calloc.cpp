#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	printf("Enter the size of the memory  = ");
	int n;
	scanf("%d",&n);
	ptr=(int*)calloc(3,sizeof(int));
	for(int i=0;i<n;i++){
		printf("Enter number  = ");
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",ptr[i]);
	}
	free(ptr);
	
	return 0;
}








