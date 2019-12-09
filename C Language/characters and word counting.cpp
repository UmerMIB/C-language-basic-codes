#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int charcnt, wordcnt;
	char ch;
	
	printf("type in a phrase");
	while((ch=getche())!='\~')
	{
		charcnt++;
		if(ch==' ')
		{
			wordcnt++;
		}
	}
	printf("\n characters=%d; word=%d; \n",charcnt,wordcnt);
	//system("paused");
}
