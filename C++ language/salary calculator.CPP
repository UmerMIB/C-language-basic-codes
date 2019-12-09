#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	float bs,ma,tra,hra,gp,tax,ns;
	system("cls");
	printf("ENTER BASIC SALARY:");scanf("%f",&bs);
	printf("\nENTER HOUSE RENT ALLOWENCE:");scanf("%f",&hra);
	printf("\nENTER TRAVEL ALLOWENCE:");scanf("%f",&tra);
	printf("\nENTER MEDICAL ALLOWENCE SALARY:");scanf("%f",&ma);
	gp=bs+hra+tra+ma;
	tax=5*gp/100;
	ns=gp-tax;
	printf("======RESULT======");
	printf("\n\n GROSS PAY= %0.0f",gp);
	printf("\n TAX=%0.0f",tax);
	printf("\n NET PAY= %0.0f memory=%d",ns,&ns);
	getch();
}

