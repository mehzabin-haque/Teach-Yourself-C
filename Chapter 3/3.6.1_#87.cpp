#include<stdio.h>
#include<conio.h>
int main()
{
	int ans,i,chance;
	
	for(i=1;i<11;i++)
	{
		printf("\nWhat is %d + %d ??\n",i,i);
		scanf("%d",&ans);
		
		if( ans == i+i)
		{
			printf("\nRight!\n");
		}
		
		else
		{
			printf("\nYou are wrong bro.\n Try again.\n");
			
			for(chance=0;chance<3;chance++)
			{
				printf("\nWhat is %d + %d ??\n",i,i);
				scanf("%d",&ans);
			
				if( ans == i+i)
				{
					printf("\nRight!\n");
					break ;
				}
			
				else
				{
					printf("\nYou are wrong again dude\n");
				}
			}
			
			if( ans != i+i)
			{
				printf("\nThe ans is %d ",i+i);
			}
		}
	}
	
	return 0;
}
