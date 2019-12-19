#include<stdio.h>
#include<conio.h>
void line(int);
void main(void)
{

	line(20);
	printf("programming el-255\n");
	line(40);
	getch();
}
void line(int k)
{
	int j;
	for(j=1;j<k;j++)
	{
		printf("\xDB");
		
	}
	printf("\n");
	
}
