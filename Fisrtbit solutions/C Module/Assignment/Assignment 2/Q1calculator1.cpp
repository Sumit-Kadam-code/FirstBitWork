// Accept two Numbers form usesrs nd operater (+,-,/,*,%)  based on that perform the desired operation

#include <stdio.h>

int main() {
    int a, b;
    char ope;

    printf("Enter first Number: ");
    scanf("%d", &a);

    printf("Enter second Number: ");
    scanf("%d", &b);
 
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &ope);  

    if (ope == '+') 
        printf("Result = %d\n", a + b);
     
	 else if (ope == '-') 
        printf("Result = %d\n", a - b);
        
     else if (ope == '*') 
        printf("Result = %d\n", a * b);
        
        
     else if (ope == '/') 
     
        if (b != 0)
            printf("Result = %d\n", a / b);
        else
            printf("Error: Division by zero\n");
    else if (ope == '%') 
        if (b != 0)
            printf("Result = %d\n", a % b);
        else
            printf("Error: Modulo by zero\n");
            
            
     else 
        printf("Invalid operator\n");
    

    return 0;

}
