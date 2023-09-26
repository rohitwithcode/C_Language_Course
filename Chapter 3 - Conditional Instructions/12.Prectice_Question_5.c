#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter four numbers ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if(a>b && a>c && a>d){
		printf("%d is greatest number ",a);
	}
	if(b>c && b>d){
		printf("%d is gretest number ",b);
	}
	if(c>d){
		printf("%d is gretest number",c);
	}
	else{
		printf("%d is gretest number ",d);
	}
	return 0;
}
