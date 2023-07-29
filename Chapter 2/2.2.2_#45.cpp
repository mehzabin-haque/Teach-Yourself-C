#include<stdio.h>
int main()
{
	int a,b,choice;
	printf("Enter the numbers : \n");
	scanf("%d %d",&a,&b);
	
	printf("\t1.Sum of numbers \n\t2.Product of numbers\n\t3.Subtract of numbers ");
	printf("Enter your choice : ");
	scanf("%d",&choice);
	
	if( choice == 1)
	{
		printf("Sum of the numbers is %d",a+b);
	}
	
	else if ( choice == 2)
	{
		printf("Product of the numbers is %d",a*b);
	}
	
	else
	{
		printf("Subtraction of the numbers is %d",a-b);
	}
	
	return 0;
}
