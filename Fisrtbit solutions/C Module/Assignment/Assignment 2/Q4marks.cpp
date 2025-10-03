#include<stdio.h>
void main(){
	
	int marks;
	
	printf("Enter the Marks:");
	scanf("%d",&marks);
	
	if(marks>=75)
	printf("Distinction\n");
	
	else if (marks>=65)
	printf("Fisrt class\n");
	
	else if (marks>=55)
	printf("Second class");
	
	else if (marks>=40)
	printf("Pass\n");
	
	
	else 
	printf("Fail");
}
