//Write C Program to swap two numbers using a temporary third variable

#include<stdio.h>

void main(){
	
int a = 10;
int b = 20;

printf("Before swapping :a= %d, b = %d\n",a,b);

 int temp = a;
 a=b;
 b=temp;

printf("After swapping :a=%d b=%d ",a,b);	
	
	
	
}

