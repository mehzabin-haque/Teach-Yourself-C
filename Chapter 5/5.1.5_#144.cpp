#include<stdio.h>
#include<conio.h>
int main()
{
	int item[100] , a,b,t,count;
	
	// read in numbers
	printf("How many numbers ?? \n");
	scanf("%d",&count);
	
	for(a=0;a<count;a++)
	{
		scanf("%d",&item[a]);
	}
	
	// now sort them using a bubble sort
	for(a=1;a<count;a++)
	{
		for(b=count-1;b>=a;b--)
		{
			// compare adjacent elements
			if(item[b-1] > item[b])
			{
				// exchange elements
				
				t = item[b-1] ;
				item [b-1] = item[b] ;
				item[b] = t ;
			}
		}
	}
	
	//display sorted list
	for(t=0;t<count;t++)
	{
		printf("%d ",item[t]);
	}
	
	return 0;
}
