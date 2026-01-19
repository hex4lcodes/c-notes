//km --> miles

#include <stdio.h>

int main() {
    //converting from km to miles

    //declaring variables
    int distance_km;
    float distance_miles;

    distance_km = 10;
    distance_miles = distance_km * 0.621371;

    printf("%dkm is %.4fmi", distance_km, distance_miles); //rounded to 4 decimal places

   return 0; 
}
