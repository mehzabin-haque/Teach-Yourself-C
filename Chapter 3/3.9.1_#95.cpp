#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	
	printf("Enter a number between 1 to 4 : ");
	scanf("%d",&i);
	
	switch(i)
	{
		case 1 :
			printf("One");
			break;
			
		case 2 :
			printf("Two");
			break;
			
		case 3 :
			printf("Three");
			break;
			
		case 4 :
			printf("Four");
			break;
			
		default :
			printf("Ghurte jabo\n");
			printf("Unrecognized number.");
	}
	return 0;
}
