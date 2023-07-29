#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	char ch;
	
	do
	{
		printf("\nEnter something : \n Press ENTER to stop\n");
		ch = getche();
		
		printf("\n");
		
		printf("\n%c converted into %c\n",ch,ch-32);
		printf("\n%c converted into %c\n",ch,ch+32);
		
	}while(ch != '\r');
	
	return 0;
}
