#include<stdio.h>
int main()
{
//	char str[] = "Pointers are fun." ;
	char *p,ch;
	int i;
	
	p = &ch;
	
	// loop until null is found
	for(i=0;i<10;i++)
	{
		p[i] = 'A' + i ;
		printf("%c",p[i]);
	}
	
	return 0;
}
