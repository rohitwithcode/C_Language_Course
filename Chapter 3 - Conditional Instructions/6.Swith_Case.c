#include<stdio.h>

int main()
{
	int x;
	int a,b;
	int u,v;
	int y,z;
	printf("1.Press 1 to Addition \n");
	printf("2.Press 2 to Subtraction \n");
	printf("3.Press 3 to Multiplication \n");
	printf("Enter number ");
	scanf("%d",&x);
	switch(x){
		case 1:
			printf("Enter number ");
			scanf("%d",&a);
			printf("Enter number ");
			scanf("%d",&b);
			printf("Addition of Number = %d\n",a+b);
			break;
		case 2:
			printf("Enter number ");
			scanf("%d",&y);
			printf("Enter number ");
			scanf("%d",&z);
			printf("Subtraction of Number = %d\n",y-z);
			break;
		case 3:
			printf("Enter number ");
			scanf("%d",&u);
			printf("Enter number ");
			scanf("%d",&v);
			printf("Multiplication of Number = %d\n",u*v);
			break;
		default:
			printf("Invalid Value\n");
			break;
	}
	return 0;
}
