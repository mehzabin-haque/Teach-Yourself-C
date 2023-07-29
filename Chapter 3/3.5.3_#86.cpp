#include<stdio.h>
#include<conio.h>
int main()
{
	int a,choice;
	
	printf("Mailing list menu : \n");
	printf("\n1. Enter addresses\n");
	printf("\n2. Delete address\n");
	printf("\n3. Search the list\n");
	printf("\n4. Print the list\n");
	printf("\n5. Quit\n");
	
	do
	{
		printf("\nEnter the number of your choice (1-5) \n");
		scanf("%d",&choice);
		
	}while(choice<1 || choice>5);
	
	//while(choice!=1 && choice!=2 && choice!=3 && choice!=4 && choice!=5);
	
	return 0;
}
