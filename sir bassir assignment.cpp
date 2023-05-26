#include<stdio.h>

int main(void){
	char *p,a=0;
	short b=0;
	int c=0;
	float d=0;
	double e=0;
	
	p=&a;

	
	printf("%p\n",p);
	printf("%p\n",&a);
	printf("%p\n",&b);
	printf("%p\n",&c);
	printf("%p\n",&d);
	printf("%p\n",&e);
	
	return 0;
}

