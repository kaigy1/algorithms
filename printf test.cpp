#include<stdio.h>
#include<stdlib.h>


void swap(int *p1,int *p2)
{int h;
h=*p1;
*p1=*p2;
*p2=h;	
}

int main(void)
{
	
int i,a;
int *p,*h;
int **q = &p;
p=&i;
h=&a;
i=10;
a=100;
	
printf("%d and %d",i,a);
	
return 0;	
}
