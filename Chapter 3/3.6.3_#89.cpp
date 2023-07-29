#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num,is_prime=0;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	if((num>0) && (num<1001))
	{
		for(i=2;i<num;i++)
		{
			if(num%i == 0)
			{
				is_prime = 1 ;
			}
		}
		
		if(is_prime == 0)
		{
			printf("Prime number.");
		}
	
		else
		{
			printf("Not a prime number.");
		}
		
	}
	
	else
	{
		printf("Nothing to do.");
	}
	
	return 0;
}
