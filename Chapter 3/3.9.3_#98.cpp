#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	
	do
	{
		printf("Enter a character \n Q to quit \t");
		ch = getche();
		printf("\n");
		
		switch(ch)
		{
			case 'a' :
				printf("Now is ");
			
			case 'b' :
				printf("the time ");
				
			case 'c' :
				printf("for all good men ");
				
			case 'd' :
				printf("The summer ");
				
			case 'e' :
				printf("soldier ");
		}
		
	}while( ch != 'Q');
	
	return 0;
}
