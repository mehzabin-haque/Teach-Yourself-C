#include<stdio.h>
int main()
{
	int i,ans;
	
	for(i=1; i<11 ; i++)
	{
		printf("\nWhat is %d + %d? \n",i,i);
		// printf("\?"); // question mark
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
	}
	
	return 0;
}
