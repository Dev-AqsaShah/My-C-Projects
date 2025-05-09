/*write a C program to perform addition, subtraction, multiplication and division of two numbers by input.
expected output:
input any two numbers: 10 5
the sum of the given numbers: 15
the difference of the given numbers: 5
the product of the given numbers: 50
the quotient of the given numbers: 2.000000
*/

// *************************************************************


// Pseudocode:
// pgsql
// Copy code
// START
//   Declare variables: num1, num2, sum, difference, product, quotient

//   DISPLAY "Input any two numbers:"
//   READ num1, num2

//   CALCULATE sum = num1 + num2
//   CALCULATE difference = num1 - num2
//   CALCULATE product = num1 * num2
//   CALCULATE quotient = num1 / num2 (as float)

//   DISPLAY sum
//   DISPLAY difference
//   DISPLAY product
//   DISPLAY quotient

// END

// *********************************************************

// Flowchart Steps:
// Start

// Input two numbers

// Process:

// sum = num1 + num2

// difference = num1 - num2

// product = num1 * num2

// quotient = num1 / num2 (casted to float)

// Output:

// Display sum

// Display difference

// Display product

// Display quotient

// End


#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // taking input in one line
    printf("Input any two numbers: ");
    scanf("%d %d", &num1, &num2);

    // performing operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1 / num2;

    // displaying results
    printf("the sum of the given number: %d\n", sum);
    printf("the difference of the given number: %d\n", difference);
    printf("the product of the given numbers: %d\n", product);
    printf("the quotient of the given number: %f\n", quotient);

    return 0;
}