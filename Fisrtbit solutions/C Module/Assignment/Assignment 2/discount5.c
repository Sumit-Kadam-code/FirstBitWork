#include<stdio.h>

void main(){
	
	float price, discount, finalamount;
	char student;
	
	printf("enter purchase amount");
	scanf("%f",&price);
	
	printf("are you a student  (y/n):");
	scanf("  %c",&student);
	
	
	if (student == 'y' || student == 'Y') {
        if (price > 500)
            discount = price * 0.20;  
        else
            discount = price * 0.10;  
    } else {
        if (price > 600)
            discount = price * 0.15;  
        else
            discount = 0;             
    }

    finalamount = price - discount;

    printf("discount = %.2f\n", discount);
    printf("Final amount = %.2f\n", finalamount);


}
