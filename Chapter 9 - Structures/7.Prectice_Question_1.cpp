#include<stdio.h>
struct vector 
{
	int x;
	int y;
};
int main()
{
	struct vector v,v1;
	v.x=3;
	v.y=4;
	printf("X dimension is %d and Y dimension is %d is \n",v.x,v.y);
	v1.x=33;
	v1.y=44;
	printf("X dimension is %d and Y dimension is %d is \n",v1.x,v1.y);
	return 0;
}
