#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char dict[][2][40] = {
	"ami" , "tumi" ,"r danish",
	"amader" , "danish"
	};
	
	char word[80];
	int i=0;
	
	printf("Enter word : ");
	gets(word);
	
	while(strcmp(dict[i][0]," "))
	{
		if(strcmp(word , dict[i][0]) == 0)
		{
			printf("meaning : %s",dict[i][1]);
			break;
		}
		i++ ;
	}
	
	if(strcmp(dict[i][0]," ") == 0 )
	{
		printf("Not in dictionary \n");
	}
	
	return 0;
}
