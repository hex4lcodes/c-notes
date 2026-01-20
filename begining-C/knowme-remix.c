//Biodata Interactive Remix

#include <stdio.h>

int main() {
    // initializing variables
    int age;
    float height;
    char first_init;
    double networth;
    char favletter;

    //asking for variable values
    printf("How old are you? \n");
    scanf("%d", &age);

    printf("How tall are you in meters? \n");
    scanf("%f", &height);

    while (getchar() != '\n'); //get ready to take a char value

    printf("What is your first initial? \n");
    scanf("%c", &first_init);

    printf("What is your networth \n");
    scanf("%lf", &networth);

    while (getchar() != '\n');

    printf("What is your favorite letter? \n");
    scanf("%c", &favletter);

    //printing
    printf("You are %d years old and, ", age); 
    printf("you are %.2f meters tall. \n", height); //rounded to 2 decimal places
    printf("Your current net worth is: $%.2lf and, ", networth);
    printf("your first inital is %c. \n", first_init);
    printf("Your favorite letter is: %c \n", favletter);
    

   return 0; 
}
