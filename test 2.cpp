#include<stdio.h>
 int main ()
 {
 	int num1,num2,num3;
 	
 	printf("enter 1st no\n");
 	scanf("%d",&num1);
 		printf("enter 2nd no\n");
 	scanf("%d",&num2);
 		printf("enter 3rd no\n");
 	scanf("%d",&num3);
printf(" the greatest value is :"); 	
 	if (num1>num2&&num1>num3)
 	{printf("\n%d\n",num1);
	
	 }
	 
	 if (num2>num3&&num2>num1)
 	{printf("\n%d\n",num2);}

if (num3>num1&&num3>num2)
 	{printf("\n%d\n",num3);}

 	return 0;
 }
