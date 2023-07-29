#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char phone [][2][40] = {
		"Ammu" , "01885554445" ,
		"Abbu" , "01711153941" ,
		"Ami" , "01846666836" ,
		"HuHu" , "01839485674" ,
		"Hihi" , "01792387574" , ", "
	} ;
	
	char name[80];
	int i;
	
	printf("Name? ");
	gets(name);
	
	for(i=0;phone[i][0][0];i++)
	{
		if(strcmp(name,phone[i][0]) == 0)
		{
			printf("Number : %s",phone[i][1]);
		}
	}
	
	return 0;
}
