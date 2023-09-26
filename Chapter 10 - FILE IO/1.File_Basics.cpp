#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("Hello.txt","w");
	if(ptr==NULL){
		printf("File Not created\n");
	}else{
		printf("File created successfully");
	}
	return 0;
}
