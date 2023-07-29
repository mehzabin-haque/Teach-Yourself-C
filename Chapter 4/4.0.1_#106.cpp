#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	
	printf("Enter something : ");
	
	do
	{
		ch = getche();
		
	}while(ch != '\r');
	
	return 0;
}
