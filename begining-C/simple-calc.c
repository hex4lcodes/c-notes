//CALCULATORR

#include <stdio.h>

int main() {
    //doing math on two integers

    //declaring variables
    int num1 = 93;
    int num2 = 90;

    //math equation variables

    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;
    int result_int = num1 / num2;

    //float division is weird...
    
    float dec1 = 93.0; //convert num1 to float for float division

    float result_float = dec1 / num2;

    int mod = num1 % num2;

    printf("%d + %d = %d \n", num1, num2, sum);
    printf("%d - %d = %d \n", num1, num2, diff);
    printf("%d * %d = %d \n", num1, num2, prod);
    printf("%d / %d = %d \n", num1, num2, result_int);
    printf("The remainder of %d / %d = %d \n", num1, num2, mod);
    printf("%.2f - %d is really: %.2f \n", dec1, num2, result_float);

    

   return 0; 
}
