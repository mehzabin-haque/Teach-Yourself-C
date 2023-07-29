#include<stdio.h>
int main()
{
	int length,width,i,total,room;
	
	printf("How many rooms are in the house?  ");
	scanf("%d",&room);
	
	total = 0 ;
	
	for(i=room;i>0;i--)
	{
		printf("Enter length and width : ");
		scanf("%d %d",&length,&width);
		
		total = total + (length * width);
	}
	
	printf("Total square footage : %d",total);
	
	return 0;
}
