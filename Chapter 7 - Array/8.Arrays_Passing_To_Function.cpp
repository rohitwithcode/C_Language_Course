#include<stdio.h>
//void printArray(int *ptr,int n){
//	for(int i=0;i<n;i++){
//		printf("The value of element %d is %d \n",i+1,*(ptr+i));
//	}
//}
void printArray(int ptr[],int n){
	for(int i=0;i<n;i++){
		printf("The value of element %d is %d \n",i+1,ptr[i]);
	}
	ptr[3]=4564; // Value change in main funtion 
}
int main()
{
	int arr[6]={4,6,4,5,6,7};
	printArray(arr,6);
	printf("\nThe value of 3rd element is %d ",arr[3]);
	return 0;
}
