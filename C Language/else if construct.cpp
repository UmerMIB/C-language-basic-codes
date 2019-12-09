#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int main()
 {
 	float num1,num2,i=1;
 	char op;
 	printf("\n type number operator, number \n");
 	scanf("%f %c %f",&num1,&op,&num2);
 	if (op=='+')
 		printf("%f",num1+num2);
	else if(op=='-')
		printf("%f",num1-num2);
	else 
	printf("select '+' or '-' as operator");
}
