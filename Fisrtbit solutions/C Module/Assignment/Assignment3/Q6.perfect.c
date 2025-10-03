#include<stdio.h>
int main(){
	int  n , i, sum = 0;  //take user input this problem n = 28 
	printf("Enter a number:");
	scanf("%d",&n);
	for( i=1; i<=n/2;i++){
		if(n%i==0) {
		
		sum+=i;
	}
}
if(sum==n){
	printf("%d perfect\n",n);
	}else{
		printf("%d Not Perfect",n);
	}
	return 0 ;
}
