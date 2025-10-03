#include<stdio.h>

void main(){
	
	int num = 15;
	
	
	if(num%3==0&&num%5==0) {
	
	
	printf("Divisible by both 3 and 5");
	}
	
	
	else if(num%3==0&&num%5!=0) {
	
	
	printf("divisible by 3"); }
	
	else if(num%3!=0&&num%5==0) {
	
	printf("divisible by 5");  }
	
	
	else{
		printf("not divisible by 3 or 5");
	}

}
