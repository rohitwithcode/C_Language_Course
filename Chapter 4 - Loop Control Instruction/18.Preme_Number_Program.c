#include<stdio.h>
int main()
{
	printf("Enter the number = ");
	int n;
	scanf("%d",&n);
	int prime=1;
	int i=2;
	for(;i<=n;i++){
		if(n%i==0){
			prime=0;
			break;
		}
	}
	if(prime==1){
		printf("The number %d  is prime number",n);
	}
	else{
		printf("The number %d is not prime number",n);
	}
	return 0;
}
