#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define rows 1
#define cols 2
int main()
{
	float students[rows][cols], numbers,expanses;
	printf("Enter 3 digit roll no and your expanses");
	scanf("%f %f",&numbers,&expanses);
	students[1][0]=numbers;
	students[1][1]=expanses;
	printf("students %3.0f",students[1][0]);
	printf("spent %4.2f",students[1][1]);
	
}
