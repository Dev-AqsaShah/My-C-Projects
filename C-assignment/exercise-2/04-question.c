/* write a c program to multiply two floating point numbers. 
*/

#include <stdio.h>

int main() {
    float num1, num2, product;

    // taking input
    printf("enter first number: ");
    scanf("%f", &num1);

    printf("enter second number: ");
    scanf("%f", &num2);

    // calculating product
    product = num1 * num2;

    // displaying result
    printf("product = %.2f\n", product);

    return 0;
}

// Pseudocode:

// START
//   Declare float variables: num1, num2, product

//   DISPLAY "Enter first number:"
//   READ num1

//   DISPLAY "Enter second number:"
//   READ num2

//   CALCULATE product = num1 * num2

//   DISPLAY product

// END

// *****************************************************************

 // Flowchart Steps with Shapes
// Start → 🔵 Oval

// Input first number (num1) → 🟨 Parallelogram

// Input second number (num2) → 🟨 Parallelogram

// Process: Multiply num1 * num2 and store in product → 🟥 Rectangle

// Output product → 🟨 Parallelogram

// End → 🔵 Oval




