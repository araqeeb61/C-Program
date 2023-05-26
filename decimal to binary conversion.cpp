#include<stdio.h>
#include<conio.h>
int main ()
{ 
int numerator,i=0;
int reminder[10];

printf("Enter Your Decimal Value:\n\a");
scanf("%d",&numerator);
printf("given decimal value in binay is :\n");
for (i=0;numerator!=0;i++)
{

reminder[i]=numerator%2;
numerator=numerator/2;

}
for(i=i-1;i>=0;i--){
	printf("%d",reminder[i]);
}


   return 0;
}
