// Input five numbers and find average-----
 
#include<stdio.h>
void main(){
	
	
	float num1=10.5,  num2=20.5, num3=30.5,  num4=40.5,  num5=50.5 ;
	
	float sum = num1 + num2 + num3 + num4 + num5 ;
	float average =sum/ 5 ;
	printf("Five number average is: %.2f, %.2f, %.2f, %.2f, %.2f is : %.2f\n ",num1,num2,num3,num4,num5,average);
}
