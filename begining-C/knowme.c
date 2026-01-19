int main() {
    // initializing variables
    int age;
    float height;
    char first_init;
    double networth;
    char favletter;

    //giving variables values

    age = 22;
    height = 1.7018;
    first_init = 'A';
    networth = 62678;
    favletter = 'J';

    //printing
    printf("I am %d years old and, ", age); 
    printf("I am %.2f meters tall. \n", height); //rounded to 2 decimal places
    printf("My current net worth is: $%.2lf and, ", networth);
    printf("my first inital is %c. \n", first_init);
    printf("My favorite letter is: %c \n", favletter);

   return 0; 
}
