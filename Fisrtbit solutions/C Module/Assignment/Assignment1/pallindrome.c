#include<stdio.h>
void main(){
	
	int no = 123;
	
	int first = no/100;
	int last = no%10;
	
	
	
	if(  first == last  )
	{
		printf("%d is  pallindrome number .\n",no);
		
		
	}
	else 
	{
		printf("%d  is  not pallindrome number .\n",no);
	}
	
}
