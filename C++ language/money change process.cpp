#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define LIM 5
int main()
{
	int dex,quantity,amount,table[LIM]={100,50,20,10,1};
	printf("Enter the amount in rupees(eg:556,76)");
	scanf("%d",&amount);
	for (dex=0; dex<LIM; dex++)
	{
		quantity=amount/table[dex];
		printf("value of bill=%3d ",table[dex]);
		printf("number of bill=%3d\n",quantity);
		amount=amount%table[dex];
	}
}
