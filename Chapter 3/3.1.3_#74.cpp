#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	char ch;
	
	printf("Do you want to : \t\nAdd \t\nSubtract \t\nMultiply \t\nDivide ? ");
	printf("\nEnter the first letter : ");
	
	ch = getche();
	printf("\n");
	
	printf("Enter the numbers : ");
	scanf("%d %d",&a,&b); 
	
	if( ch == 'A' || ch == 'a')
	{
		printf("Addition %d",a+b);
	}
	
	if( ch == 'S' || ch == 's')
	{
		printf("Subtraction %d",a-b);
	}
	
	if( ch == 'M' || ch == 'm')
	{
		printf("Multiplication %d",a*b);
	} 
	
	if( ch == 'D' || ch == 'd' && b!=0)
	{
		printf("Division %d",a/b);
	} 
	
	return 0;
}
