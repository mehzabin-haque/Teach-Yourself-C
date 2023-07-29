#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	
	printf("Enter the message : ");
	
	ch = getche();
	
	while(ch != '\r') // \r holo enter er symnolization
	{
		printf("%c\n",ch+1);
		//printf("%c\n",ch+1); aie ta holo - decode messages that have been encoded using the code machine program
		ch = getche ();
	}
	
	return 0;
}
