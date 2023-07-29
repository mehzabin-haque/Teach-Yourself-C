#include<stdio.h>
int main()
{
	int num,a,i;
	
	a = 1233;
	num = 0 ;
	
	for(i=0; i<10 && num!= a ; i++)
	{
		printf("\n\nGuess the magic number : ");
		scanf("%d",&num);
		
		if(num == a)
		{
			printf("\nRight !");
			break ;
		}
		
		else
		{
			printf("\nSorry... Wrong Answer -.-");
			if(num > a)
			{
				printf("\nGuess a lower number");
			}
		
			else
			{
				printf("\nGuess a higher number");
			}
			
		}
		
	}
	
	return 0;
}
