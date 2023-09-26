#include<stdio.h>
float bodyMass(float n)
{
	return 9.8*n;
}
int main()
{
	printf("Enter the body mass in kg = ");
	float m;
	scanf("%f",&m);
	float b=bodyMass(m);
	printf("Value of force in Newton is %.2f\n ",b);
	return 0;
}
