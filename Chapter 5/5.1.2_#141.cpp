#include<stdio.h>
#include<conio.h>
int main()
{
	int temp[31],i,min,max,avg,days;
	printf("How many days in the month?\n");
	scanf("%d",&days);
	
	for(i=0;i<days;i++)
	{
		printf("Enter noonday temperature for day %d : ",i+1);
		scanf("%d",&temp[i]);
	}
	
	//find average
	avg = 0;
	for(i=0;i<days;i++)
	{
		avg = avg + temp[i] ;
	}
	
	printf("\nAverage temperature : %d \n",avg/days);
	
	// find min and max
	min = 200 ; // initialize min and max
	max = 0 ;
	
	for(i=0;i<days;i++)
	{
		if(min>temp[i])
		{
			min = temp[i] ;
		}
		
		if(max<temp[i])
		{
			max = temp[i] ;
		}
	}
	
	printf("\nMinimum Temperature : %d\n",min);
	printf("\nMaximum Temperature : %d\n",max);
	
	return 0;
}
