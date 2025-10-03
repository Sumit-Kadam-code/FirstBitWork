#include<stdio.h>

int main(){
	int n = 153;
	
	int sum = 0;
	int  temp, digit;
	for(temp=n; temp!=0; temp/=10){
		digit = temp%10;
		
		sum+=digit*digit*digit;
		
	}
	if(sum==n)
	printf("%d is Armstorng Number\n",n);
	else
	printf("%d is Not Armstrong Number\n",n);
	return 0;
}