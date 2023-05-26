#include<stdio.h>
int main ()
{  int a,*ptr;
    
    a=23;
    ptr=&a;
    printf("%u\n",&a);
    printf("%p\n",&a);
    printf("%u\n",ptr);
    printf("%p\n",ptr);

   return 0;
} 
