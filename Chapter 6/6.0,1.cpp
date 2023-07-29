#include<stdio.h>
int main()
{
	int i,a[10],even=0,odd=0;
	
	printf("Enter 10 numbers : ");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<10;i++)
	{
		if( a[i] % 2 == 0) 
		{
			even = even + a[i] ;
		}
		
		if( a[i] % 2 != 0) 
		{
			odd = odd + a[i] ;
		}
	}
	
	printf("\tSum of even numbers %d",even);
	printf("\n\tSum of odd numbers %d",odd);
	
	return 0;
}
