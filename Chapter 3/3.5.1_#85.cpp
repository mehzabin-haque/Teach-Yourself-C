#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	char ch;
	
	printf("Do you want to : \n");
	printf("Add, Subtract, Multiply or Division ? \n");
	
	do
	{
		printf("Enter first letter : ");
		ch = getche();
		
	}while(ch !='A' && ch !='S' && ch !='M' && ch !='D' );
	
	printf("Enter the numbers : \n");
	scanf("%d %d",&a,&b);
	
	if(ch == 'A')
	{
		printf("%d",a+b);
	}
	
	else if(ch == 'S')
	{
		printf("%d",a-b);
	}
	
	else if(ch == 'M')
	{
		printf("%d",a*b);
	}
	
	else if (ch == 'D' && b!=0)
	{
		printf("%d",a/b);
	}
	 
	return 0;
}
