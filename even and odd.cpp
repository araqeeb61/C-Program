#include<stdio.h>
int main ()
{ int a,a1,a2,a3,a4,a5,a6,a7;
printf("Enter Your Decimal Num:");
scanf("%d",&a);
a1=a/2;
a2=a1/2;
a3=a2/2;
a4=a3/2;
a5=a4/2;
a6=a5/2;
a7=a6/2;

printf("Your binay converion in : %d",a7);
printf(" %d",a6%2);
printf(" %d",a5%2);
printf(" %d",a4%2);
printf(" %d",a3%2);
printf(" %d",a2%2);
printf(" %d",a1%2);


  return 0;
}

