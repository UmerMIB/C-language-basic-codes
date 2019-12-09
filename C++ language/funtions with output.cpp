#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int umer ()
{
	int hours, mins;
	scanf("%d: %d",&hours,&mins);
	return((hours*60)+mins);	
}

int main()
{
	int min1, min2;
	printf("Type first time(eg15:12)");
	min1=umer();
	//scanf("%d",&min1);
	printf("Type second time(eg15:12)");
	min2=umer();
	//scanf("%d",&min2);
	printf("diff is %dmins ",min2-min1);
}
