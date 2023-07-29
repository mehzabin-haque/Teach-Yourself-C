#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	int digit=0,punch=0,letter=0;
	
	printf("Enter characters \nPress 'ENTER'to Stop\n ");
	
	do
	{
		ch = getche();
		
		switch(ch)
		{
			case '0' :
			case '1' :
			case '2' :
			case '3' :
			case '4' :
			case '5' :
			case '6' :
			case '7' :
			case '8' :
			case '9' :
				digit++;
				break ;
			case '.' :
			case ',' :
			case '?' :
			case '!' :
			case ';' :
			case ':' :
				punch++;
				break;
			default :
				letter++ ;
					
		}
		
	}while(ch != '\r');
	
	printf("\nDigits : %d",digit);
	printf("\nPunctuations : %d",punch);
	printf("\nLettes : %d",letter);
	
	return 0;
}
