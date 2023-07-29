#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char text[][80] = {
	"when" , "in" , "the",
	"course" , "of" , "human" ,
	"events" , ""
	};
	
	int i,j;
	
	// now display them
	for(i=0;text[i][0];i++)
	{
		for(j=0;text[i][j];j++)
		{
			printf("%c",text[i][j]);
		}
		
		printf(" ");
	}
	
	return 0;
}
