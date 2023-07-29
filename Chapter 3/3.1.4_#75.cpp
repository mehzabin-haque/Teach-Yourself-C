#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	char ch, smallest ;
	
	printf("Enter 10 letters : ");
	
	smallest = 'z';
	
	for(i=0;i<10;i++)
	{
		ch = getche();
		if( ch < smallest)
		{
			smallest = ch ;
		}
	}
	
	printf("\nEarliest in Alphabet %c",smallest);
	printf("\nLast in Alphabet %c",ch);

	return 0;
}
