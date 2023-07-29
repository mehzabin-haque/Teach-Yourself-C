#include<stdio.h>
#include<conio.h>
#include<string.h>
	
int main()
{
	char words [][2][40] = {
	"dog" , "Hund" ,
	"no" , "nein" ,
	"year" , "Jahr" ,
	"child" , "kind" ,
	"I" , "Ich" ,
	"drive" , "fahren" ,
	"house" , "haus" ,
	"to" , "zu" ,
	"" , ""  
	} ;
	
	char english[80];
	int i;
	
	printf("Enter english word : ");
	gets(english);
	
	// look up the word
	i=0;
	// search while null string not yet encountered 
	while(strcmp(words[i][0] , " "))
	{
		if(strcmp(english , words[i][0] ) == 0)
		{
			printf("German translation : %s ",words[i][1]);
			break;
		}
		
		i++ ;
	}
	
	if(strcmp(words[i][0] , " ") == 0)
	{
		printf("Not in dictionary \n");
	}
	return 0;
}
