#include<stdio.h>

void outnum(int num);

int main()
{
	outnum(12);
	outnum(33);
	outnum(214);
	
	return 0;
}

void outnum(int num)
{
	printf("\t\t%d\n",num);
}
