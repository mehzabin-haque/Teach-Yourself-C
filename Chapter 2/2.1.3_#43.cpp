#include<stdio.h>
int main()
{
	float num;
	int choice ;
	
	// printf("Enter value : ");
	// ("%f",&num);
	
	printf("1. Feet to Meters \n 2. Meters to feet \n");
	printf("Enter choice : ");
	scanf("%d",&choice);
	
	if (choice == 1)
	{
		printf("Enter Number of feet : ");
		scanf("%f",&num);
		printf("\t Meters : %f ", num/3.28);
	}
	
	else
	{
		printf("Enter Number of Meters : ");
		scanf("%f",&num);
		printf("\t Feet : %f ", num*3.28);
	}
	
	return 0;
}
