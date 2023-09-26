#include<stdio.h>
int main()
{
	FILE *ptr,*fptr;
	ptr=fopen("read.txt","r");
	fptr=fopen("read1.txt","w");
	char c;
	c=fgetc(ptr);
	while(c != EOF){
		if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
		{
			fprintf(fptr,"%c",c);
		    c=fgetc(ptr);	
		}
		else{
			c=fgetc(ptr);
		}
	}
	fclose(ptr);
	fclose(fptr);
	return 0;
}
