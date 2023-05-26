#include<stdio.h>
int main ()
{int a;
printf("Enter your age\n");
scanf("%d",&a);
if (a>=90)
{
printf("\nyour Age is over.you cant drive");
}
else if (a<=18)
{printf("\nyou are under age ,make sure your lisence then drive");
}
else {printf("\nyour are allowed to drive");
}

   return 0;
}
