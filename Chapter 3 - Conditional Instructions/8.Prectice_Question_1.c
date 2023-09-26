#include<stdio.h>
int main()
{
	int phy,che,math;
	printf("Enter phy marks ");
	scanf("%d",&phy);
	printf("Enter phy Che ");
	scanf("%d",&che);
	printf("Enter maths marks ");
	scanf("%d",&math);
	float Total=(phy+math+che)/3;
	if((Total<40) || phy<33 || che<33 || math<33){
		printf("Your percentage total is %f  and You are fail\n",Total);
	}else{
		printf("Your total Percentage is %f and you are Pass ",Total);
		
	}
}
