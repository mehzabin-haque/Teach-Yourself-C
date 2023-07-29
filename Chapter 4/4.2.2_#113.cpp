#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	
	for(i=0;i<10;i++)
	{
		if(i==5)
		{
			int j; // declare j wuthin the j block
			j = i*10 ;
			printf(" %d ",j);
		}
	}
	
	return 0;
}
