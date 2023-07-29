#include<stdio.h>
int main()
{
	int a[20] , i,j;
	int count,oldcount=0,mode,oldmode;
	
	printf("Enter numbers : ");
	
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
	}
	
	//find the mode
	for(i=0;i<20;i++)
	{
		mode = a[i] ;
		count = 1;
		//count the occurence of this value
		for(j=i+1;j<20;j++)
		{
			if(mode == a[j])
			{
				count++ ;
			}
		}
	
		// if count is greater than old count , use new mode
		if(count > oldcount)
		{
			oldmode = mode ;
			oldcount = count ;
		}
	}
	
	
	printf("The mode is %d \n",oldmode);
	
	return 0;
}
