// The switch statement
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int main()
 {
 	float num1,num2,i=1;
 	char op;
 	do
 	{
	 
 		printf("\n type number operator, number \n");
 		scanf("%f %c %f",&num1,&op,&num2);
 		switch(op)
 		{
 			case '+':
 			printf("=%f ",num1+num2);
 			break;
 		
 			case '-':
 			printf("=%f",num1-num2);
 			break;
 		
 			default:
 			printf("unknown op .Do you want to calculate again ?(Type y or no): \n");
 		
	 	}
  	}
	  while(i>0);
}
