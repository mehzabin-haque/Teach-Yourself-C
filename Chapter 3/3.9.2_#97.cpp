#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	char ch;
	
	printf("Do you want to \n 1. Add \n 2. Subtract \n 3. Multiply \n 4. Division ?");
	
	do
	{
		printf("\nEnter first letter : \t");
		ch = getche();
		
	}while( ch != 'A' && ch != 'a' && ch != 'S' && ch != 's' && ch != 'M' && ch != 'm' && ch != 'D' && ch != 'd');
	
	printf("\nEnter the numbers : \t");
	scanf("%d %d",&a,&b);
	
	switch(ch)
	{
		case 'A' :
		case 'a' :
			printf("\nAdd : %d ",a+b);
			break;
			
		case 'S' :
		case 's' :
			printf("\nSubtraction : %d ",a-b);
			break;
			
		case 'M' :
		case 'm' :
			printf("\nMultiplication : %d ",a*b);
			break;
			
		case 'D' :
		case 'd' :
			if( b != 0)
			{
				printf("\nDivision : %d ",a/b);
				break;
			}
	}
	
	return 0;
}
