#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	
	ch = getche();//initialization
	
	/*while(ch!='q') //condition
	{
		ch = getche(); //increment portion using as empty target
		printf("\nFound q\n"); // increment portion ta agey daoa te q enter korar por o printf er statemnet dekhabe
		// jodi pore ditam tahole print er part ta show korto na direct end hoye jeto loop ta
	} */
	
	do
	{
		ch = getche();
		printf("\nFound q\n");
	}while(ch!='q');
	
	return 0;
}
