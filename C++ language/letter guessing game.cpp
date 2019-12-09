#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()	
{
	char ch='o';
	do
	{
		printf("\n Type in a letter from a to e :\n");
		while((ch=getch())!='c')
		{
			printf("\n Sorry %c is incorrect \n",ch);
			printf("Try again \n");
	
		}
		printf("\n That's it ! \n");
		printf("\nPlay again?(type 'y' or 'n'):\n");
	}
	while (getch()=='y');
	printf("Thanks for playing!");
	getch();
}
