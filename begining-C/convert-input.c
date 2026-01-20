//Conversion Input

#include <stdio.h>

int main() {
    // but now we accept distance from the user!

    //km --> miles

    //declaring variables
    int distance_km;
    float distance_miles;

    printf("Enter the distance in kilometers (km) rounded to the nearest whole number: \n");
    scanf("%d", &distance_km);

    distance_miles = distance_km * 0.621371;

    printf("%dkm is %.4fmi", distance_km, distance_miles); //rounded to 4 decimal places
    

   return 0; 
}
