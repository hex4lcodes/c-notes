//check to see if number is negative, positive, or 0
#include <stdio.h>

int main() {
    //number checker

    int number;

    printf("Enter a number: \n");
    scanf("%d", &number);

    if (number < 0) {

        printf("Your number %d is negative \n", number);
    }
    else if (number > 0) {

        printf("Your number %d is positive! \n", number);
    }
    else if (number == 0) {

        printf("You entered 0 literally. \n");
    }
    else {
        
        printf("Not a valid response. Try again \n");
    }


   return 0; 
}
