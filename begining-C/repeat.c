//character repeat

#include <stdio.h>

int main() {
    // repeat a character

    char pick;
    int count;

    printf("Enter a character: \n");
    pick = getchar();

    printf("How many times to print the character? \n");
    scanf("%d", &count);
    
    // printing the character
    for (int i = 0; i < count; i++){

        putchar(pick);
        putchar('\n');
    }


   return 0; 
}
