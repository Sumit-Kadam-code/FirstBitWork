#include<stdio.h>

int main(){
	
	int n = 5;
	int factorial = 1;
	for(int i =1; i<=n; i++){
		factorial= factorial*i;
	}
	printf(" Factorial %d is %d \n ",n,factorial);
}