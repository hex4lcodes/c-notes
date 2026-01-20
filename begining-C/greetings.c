//give a greeting based on the number using switch statements
#include <stdio.h>

int main() {
    //user choice variable
    int choice;

    printf("Enter a number: \n");
    scanf("%d", &choice);

  //greetings
    switch (choice) {

        case 1:
        printf("Hello! \n");
        break; //do this then break out of the program if this is true

        case 2:
        printf("Goodbye \n");
        break;

        case 3:
        printf("This program is being written on January 20, 2026 \n");
        break;

        default:
        printf("Invalid choice, please enter 1, 2, or 3 \n");
        break;
    }


   return 0; 
}
