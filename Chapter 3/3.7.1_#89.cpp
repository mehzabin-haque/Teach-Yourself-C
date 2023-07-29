#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	char ch;
	
	for(i=1;i<1000;i++)
	{
		printf("%d",i);
		
		if(!(i%6))
		{
			printf("\n%d , more? (Y/N)",i);
			ch = getche();
			
			if( ch == 'N')
			{
				break;
			}
			
			printf("\n");
		}
	}
	
	return 0;
}
