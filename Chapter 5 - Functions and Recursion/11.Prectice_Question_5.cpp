#include<stdio.h>
void pattern(int a){
	for(int i=0;i<=a;i++){
		for(int j=0;j<2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	
}
int main()
{
	int a;
	printf("Enter the number ");
	scanf("%d",&a);
	pattern(a);
	return 0;
}
