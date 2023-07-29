#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	
	printf("\nEnter a number : ");
	scanf("%d",&i);
	
	if( i == 0 )
	{
		printf("It's value is ZERO ");
	}
	
	else if( i < 0 )
	{
		printf(" It is a negative number ");
	}
	
	else
	{
		printf(" It is a positive number ");
	}
	return 0;
}
