#include<stdio.h>

int main() {

int n = 6;
int i;
printf("Multiplication table of %d:\n",n);
for(i=1;i<=10;i++){
	printf("%d\n",n*i);
}
return 0;
}