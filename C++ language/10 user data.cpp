#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;
int main()
{
	int n=3;
	int roll_no[n]={0},pension[n]={0},i;
	char name[n][10]={""};
	for (i=0;i<n;i++)
	{
		printf("\n %s name has roll no# %d and have pension %d\n ",name[i],roll_no[i],pension[i]);
	}
	for (i=0;i<n;i++)
	{
		printf("\n type your name, roll no and pension ");
		scanf("%s%d%d",&name[i],&roll_no[i],&pension[i]);
		//printf(" Your name is %c, roll no# %d and pension# %d ",name,roll_no,pension);
		
	}
	for (i=0;i<n;i++)
	{
		printf("\n %s name has roll no# %d and have pension %d\n ",name[i],roll_no[i],pension[i]);
	}
}
