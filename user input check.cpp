#include<stdio.h>
#include<conio.h>
int main ()
{ int num1;
  printf("ENTER 1ST NUMBER \n");
  scanf("%d",&num1);
  int num2;
  printf("ENTER 2ND NUMBER \n");
  scanf("%d",&num2);
  int num3;
  printf("ENTER 3RD NUMBER \n");
  scanf("%d",&num3);
  if (num1>num2 && num1>num3)
  printf("%d",&num1);
  if (num2>num1 && num2>num3) 
  printf("%d",&num2);
  if (num3>num1 && num3>num2)
  printf("%d",&num3);
   
   return 0;
   
}

