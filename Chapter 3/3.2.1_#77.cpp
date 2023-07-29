#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	char ch;
	
	printf("What do you want to do??\n");
	printf("\t\n1.Add \t\n2.Subtract \t\n3.Multiply \t\n4.Division ");
	printf("\nEnter the first letter : ");
	ch = getche();
	printf("\n");
	
	printf("Enter the numbers : ");
	scanf("%d %d",&a,&b);
	
	if(ch == 'A' || ch == 'a')
	{
		printf("Add : %d",a+b);
	}
	
	else if(ch == 'S' || ch == 's')
	{
		printf("Sub : %d",a-b);
	}
	
	else if(ch == 'M' || ch == 'm')
	{
		printf("Multiply : %d",a*b);
	}
	
	else if(ch == 'D' || ch == 'd' && b!=0)
	{
		printf("Division : %d",a/b);
	}
	
	else
	{
		printf("Nothing to do.");
	}
	
	return 0;
}
