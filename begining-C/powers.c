#include <stdio.h>
#include <math.h>

//raise 1 number to the power of another

int main() {
    int base, exponent, result;

   base = 12;
   exponent = 2;

    // calculates the power: base^exponent
    result = pow(base, exponent);

    printf("%d^%d = %d", base, exponent, result);

    return 0;
}
