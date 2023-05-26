#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main ()
{
	float tax=0,income;
	printf("Enter Youer income \n");
	scanf("%f\n",&income);
	if (income<250000)
	{printf("Your Return Tax Is zero");
	}
    if (income>=250000&&income<500000)
	{tax=0.05*(income-250000);
	printf("Your Return Tex Is %f\n",tax);
	}
	if (income>500000 && income <=1000000)
	{tax=0.1*(income-500000);
	printf("Your Return Tex Is %f\n",tax);
	if (income>1000000)
	{tax=0.2*(income-1000000);

	printf("Your Return Tex Is %f\n",tax);
	}
	}
	return 0;
}
