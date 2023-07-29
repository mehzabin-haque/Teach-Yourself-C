#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	float g,l;
	
	printf("How many times you want to convert??\n");
	scanf("%d",&i);
	
	do
	{
		printf("\nNumber of Gallons : ");
		scanf("%f",&g);
		
		printf("\n%f gallons Converted into %f Liters .\n",g,g*3.7854);
		
		printf("Enter 0 to quit the process.\n");
		scanf("%d",&g);
		
		i-- ;
		
	}while(i>0 && g!=0);
	
	return 0;
}
