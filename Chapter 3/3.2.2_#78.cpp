#include<stdio.h>
int main()
{
	int i,ans,right=0,wrong=0;
	
	for(i=1; i<11 ; i++)
	{
		printf("\nWhat is %d + %d? \n",i,i);
		// printf("\?");  question mark
		scanf("%d",&ans);
		
		if(ans == i+i)
		{
			printf("\nRight!!!");
			right++;
		}
		
		else
		{
			printf("\nSorry, you're wrong !!!!\n");
			printf("\nWhat is %d + %d? \n",i,i);
			scanf("%d",&ans);
			
			if(ans == i+i)
			{
				printf("\nRight!!!");
			}
			
			else 
			{
				printf("\nSorry, you're wrong !!!!\n");
				printf("\nThe ans is %d \n",i+i);
			}
			
			wrong++ ;
			
		}
	}
	
	printf("You got %d right and %d wrong",right,wrong);
	
	return 0;
}
