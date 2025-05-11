/*write a c program to calculate the integral quotient and remainder of a division.
test data and expected output: 
input numerator: 2500
input denominator: 235
quotient = 10. remainder = 150
*/

#include <stdio.h>

int main() {
    int numerator, denominator, quotient, remainder;

    // taking input
    printf("Input numerator: ");
    scanf("%d", &numerator);

    printf("Input denominator: ");
    scanf("%d", &denominator);

    // calculating quotient and remainder
    quotient = numerator / denominator;
    remainder = numerator % denominator;

    // displaying results
    printf("quotient = %d\n", quotient);
    printf("remainder = %d\n", remainder);

    return 0;


}   

// *************************************************************

// Pseudocode:
// pgsql
// Copy code
// START
//   Declare variables: numerator, denominator, quotient, remainder

//   DISPLAY "Input numerator:"
//   READ numerator

//   DISPLAY "Input denominator:"
//   READ denominator

//   CALCULATE quotient = numerator / denominator
//   CALCULATE remainder = numerator % denominator

//   DISPLAY "Quotient = ", quotient
//   DISPLAY "Remainder = ", remainder

// END

// *****************************************************************************

// Flowchart Description:
// Start

// Input numerator

// Input denominator

// Process:

// quotient = numerator / denominator

// remainder = numerator % denominator

// Output quotient

// Output remainder

// End