#include<stdio.h>
#include<conio.h>
int main()
{
	float i;
	char ch;
	
	printf("Tip Computation ");
	
	for(i=1.0;i<=100.0;i++)
	{
		printf("The proper amount of tip to leave : ");
		
		printf("\n10 percent tip on $ %f = %f",i,(i+(i*.10)));
		printf("\n15 percent tip on $ %f = %f",i,(i+(i*.15)));
		printf("\n20 percent tip on $ %f = %f",i,(i+(i*.20)));
		
		printf("\nDo you want to continue? \n");
		printf("\nY/N\n");
		
		ch = getche();
		
		if(ch == 'N')
		{
			break;
		}
		
	}
	
	return 0;
}
