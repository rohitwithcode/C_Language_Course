#include<stdio.h>
int main()
{
	int marks[4];
	int *ptr=marks;
	for(int i=0;i<4;i++){
		printf("Enter the value of %d student ",i+1);
		scanf("%d",ptr);
		ptr++;
	}

	for(int i=0;i<4;i++){
		printf("%d ",*(ptr+i));
	}
	return 0;
	
}
