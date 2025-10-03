#include<stdio.h>

int main(){
	
int n = 145;
int temp= n ;
int sum=0;

while(temp>0){
	int digit = temp%10;
	int fact= 1;
	
	for(int i=1; i<=digit; i++){
		fact = fact*i;
		
	}
	sum = sum +fact;
	temp=temp/10;
}
if(sum==n)
printf("%d storng\n",n);
else
printf("%d not Strong\n",n);
return 0 ;
}