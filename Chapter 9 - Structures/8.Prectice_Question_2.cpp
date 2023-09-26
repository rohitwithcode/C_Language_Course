#include<stdio.h>
struct vector 
{
	int x;
	int y;
};
struct vector sumVector(struct vector v,struct vector v1)
{
	struct vector result;
	result.x=v.x+v1.x;
	result.y=v.y+v1.y;
	return result;
}

int main()
{
	struct vector v,v1;
	v.x=3;
	v.y=4;
	printf("X dimension is %d and Y dimension is %d is \n",v.x,v.y);
	v1.x=33;
	v1.y=44;
	printf("X dimension is %d and Y dimension is %d is \n",v1.x,v1.y);
	
	struct vector sum=sumVector(v,v1);
	printf("The sum of two vectors is X=%d  Y=%d ",sum.x,sum.y);
	return 0;
}
