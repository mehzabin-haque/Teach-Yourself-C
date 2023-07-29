#include<stdio.h>
#include<conio.h>
int main()
{
	int i,k;
	char j;
	
	for(i=0;i<3;i++)
	{
		for(j='A';j<='Z';j++)
		{
			for(k=0;k<2;k++)
			{
				printf("%c ",j);
			}
		}
	}
	
	return 0;
}
