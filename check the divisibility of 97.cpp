#include<stdio.h>
#include<conio.h>
int main ()
{ //programm is designded to check wether the given no is divisivle r or not?

	int a=97,input,result;
	// here we take input from the user to get the result for the divisibility fo 97
    
    printf("enter the value of for checking the divisibility\n");
	scanf("%d",&input);
	printf("your reult is: %d",a%input);
    result=a%input;
    if (result==0)
    {printf("\n\tdivisible");
	}
	
	else
	{printf("\n\tnot divisible");
	}
	return 0;
}
