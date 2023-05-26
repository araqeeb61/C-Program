#include<stdlib.h>
#include<stdio.h>
int main ()
{  
int array[50];

scanf("%d",&array[0]); 
scanf("%d",&array[1]); 
scanf("%d",&array[2]); 
scanf("%d",&array[3]); 
scanf("%d",&array[4]); 
scanf("%d",&array[5]); 
scanf("%d",&array[6]); 
scanf("%d",&array[7]); 
 int rem0,rem1,rem2,rem3,rem4,rem5,rem6,rem7;
 rem0=0;
 rem1=0;
 rem2=0;
 rem3=0;
 rem4=0;
 rem5=0;
 rem6=0;
 rem7=0;
 
/* int quot0,quot1,quot2,quot3,quot4,quot5,quot6,quot7;
quot0=0;
quot1=0; 
 quot2=0;
 quot3=0;
 quot4=0;
 quot5=0;
 quot6=0;
quot7=0;*/
printf("Enter Your First Value\n\a");
for (array[0]=array[0];array[0]!=0;array[0]+=1)
{
rem0=array[0]%2;
array[0]=array[0]/2;
printf("%d",array[0]);}

printf("Enter Your 2nd Value\n\a");
for (array[1]=array[1];array[1]!=0;array[1]+=1)
{
rem0=array[1]%2;
array[1]=array[1]/2;
printf("%d",array[1]);}

printf("Enter Your 3rd Value\n\a");
for (array[2]=array[2];array[2]!=0;array[2]+=1)
{
rem0=array[2]%2;
array[2]=array[2]/2;
printf("%d",array[2]);}

printf("Enter Your 4th Value\n\a");
for (array[3]=array[3];array[3]!=0;array[3]+=1)
{
rem0=array[3]%2;
array[3]=array[3]/2;
printf("%d",array[3]);}

printf("Enter Your 5th Value\n\a");
for (array[4]=array[4];array[4]!=0;array[4]+=1)
{
rem0=array[4]%2;
array[4]=array[4]/2;
printf("%d",array[4]);}

printf("Enter Your 6th Value\n\a");
for (array[5]=array[5];array[5]!=0;array[5]+=1)
{
rem0=array[5]%2;
array[5]=array[5]/2;
printf("%d",array[5]);}

printf("Enter Your 7th Value\n\a");
for (array[6]=array[6];array[6]!=0;array[6]+=1)
{
rem0=array[6]%2;
array[6]=array[6]/2;
printf("%d",array[6]);}

printf("Enter Your 8th Value\n\a");
for (array[7]=array[7];array[7]!=0;array[7]+=1)
{
rem0=array[7]%2;
array[7]=array[7]/2;
printf("%d",array[7]);}


return 0;
}
