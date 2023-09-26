#include<stdio.h>
int main()
{
	printf("Enter the number = ");
	int n,i=2,prime=1;;
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			prime=0;
			i++;
			break;
	}
	}
	if(prime==0 && n!=2){
		printf("%d is not a prime number",n);
	}
	else{
		printf("%d is a prime number ",n);
	}
	
}
