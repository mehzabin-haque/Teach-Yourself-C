#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i , l;
	char *p[] = {
	"Input exceeds field width" ,
	"Out of range" ,
	"Printer not turnrd on" ,
	"Paper out" ,
	"Disk full" ,
	"Disk write error"
	};
	
	l = sizeof(p) ;
	
	for(i=0;i<=l;i++)
	{
		printf(p[i]);
		printf("\n") ;
	}
	
	return 0;
}
