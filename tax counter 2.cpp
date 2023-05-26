#include<stdio.h>
#include<stdlib.h>
int main ()
{  float tax=0,income;
   printf("Enter Your Income :\n");
   scanf("%f",&income);
   if (income<250000)
   {printf("Your Tax is NIL");}
   if (income>=250000 && income<500000)
   {  tax=0.05*(income-250000);
   printf("Your tax is :\n%f",tax); }   
   
   return 0;
}
