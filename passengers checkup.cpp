#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main ()
{ int ps[6];
  char station0[10]="karachi",station1[10]="lahore",station2[15]="Rawalpindi",station3[15]="last_station";
char a,b,c,d,e,f;
  
  printf("Enter the passengers entered in train in karachi:\n");
  scanf("%d",&ps[0]);printf("passengers =%d\n",ps[0]);
  
  printf("Enter the passengers get of the train in Lahore:\n");
  scanf("%d",&ps[1]);printf("passengers =%d\n",ps[0]-ps[1]); 
  
  printf("Enter the passengers entered in train in lahore:\n");
  scanf("%d",&ps[2]);printf("passengers =%d\n",(ps[0]-ps[1])+ps[2]);
  
  printf("Enter the passengers get of the train in Rawalpindi:\n");
  scanf("%d",&ps[3]);printf("passengers =%d\n",(ps[0]-ps[1])+ps[2]-ps[3]);
  
  printf("Enter the passengers entered in train in Rawalpindi:\n");
  scanf("%d",&ps[4]);printf("passengers =%d\n",(ps[0]-ps[1])+(ps[2]-ps[3])+ps[4]);
  
  printf("Enter the passengers get of the train in last station :\n");
  scanf("%d",&ps[5]);printf("passengers =%d\n",(ps[0]-ps[1])+(ps[2]-ps[3])+ps[4]-ps[5]);
  
/*  //passengers from karachi to lahore 
 a= ps[0]-ps[1];
//passengers from karachi to pindi 
b= ps[3]-(ps[0] -ps[1]); 
 //passengers from karachi to last station   
 c= (ps[3]-(ps[0]-ps[1]));
  //passengers from lahore to pindi 
 d= ps[2]-(ps[0]-ps[1]);
  //passengers from lahore to last station
  e=ps[2]-(ps[3]-(ps[0]-ps[1]));
  //passengers from pindi to last station
  f=(ps[5]-ps[4]);*/
  return 0;
}
