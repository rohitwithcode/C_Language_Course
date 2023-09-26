#include<stdio.h>
int main()
{
	int arr[10];
	int *ptr=arr;
	ptr=ptr+2;
	
	if(ptr==&arr[2]){
		printf("Both are locate at the same memory \n");
	}
	else{
		printf("Both are not locate at the same memory \n");
	}
	
	return 0;
}
