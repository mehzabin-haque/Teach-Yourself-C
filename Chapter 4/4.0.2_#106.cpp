#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	float meter,feet,ounces,pound;
	
	do
	{
		printf("Convert \n");
		printf("\t1.feet to meters\n");
		printf("\t2.meters to feet\n");
		printf("\t3.ounces to pounds\n");
		printf("\t4.pounds to ounces\n");
		printf("\t5.Quit\n");
		
		do
		{
			printf("Enter the number of choice : ");
			scanf("%d",&i);
		}while( i<0 || i>5);
		
		switch(i)
		{
			case 1 :
				printf("\nEnter feet : ");
				scanf("%f",&feet);
				printf("\nMeters : %f\n",feet/3.28);
				break ;
				
			case 2 :
				printf("\nEnter Meters : ");
				scanf("%f",&meter);
				printf("\nFeet : %f\n",meter*3.28);
				break ;
				
			case 3 :
				printf("\nEnter ounces : ");
				scanf("%f",&ounces);
				printf("\nPound : %f\n",ounces/16);
				break ;
				
			case 4 :
				printf("\nEnter pound : ");
				scanf("%f",&pound);
				printf("\nOunces : %f\n",pound*16);
				break ;
		}	
		
	}while(i!=5);
	
	return 0;
}
