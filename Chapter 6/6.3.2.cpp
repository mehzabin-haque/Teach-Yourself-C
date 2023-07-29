#include<stdio.h>
int main()
{
	float balance[2][2] ;
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%f",&balance[i][j]);
		}
	}
	
	float *p;
	
	p = (float *) balance ;
	printf("%f",*( p + (0*2) + 3)); // [1][1] er value show korbe
	
	return 0;
}
