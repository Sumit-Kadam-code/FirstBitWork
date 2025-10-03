#include<stdio.h>	
int main(){
	int n = 121;
	int original = n;
	int rev = 0;
	int digit;
	
	for(int temp= n; temp!=0; temp/=10){
		digit=digit%10;
		rev = rev * 10+digit;
	}
	if(rev==original)
	printf("Palindrome\n");
	else 
	printf("not Palindrome\n");
	return 0;
}