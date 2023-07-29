#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	
	do
	{
		printf("\nEnter Something : ");
		ch = getche();
		
		switch(ch)
		{
			case '\t' :
				printf("Tab");
				break ;
				
			case '\b' :
				printf("Backspace");
				break ;
				
			case '\r' :
				printf("Newline or Enter");
				break ;
		}
			
	}while( ch != 'q');
	
	return 0;
}
