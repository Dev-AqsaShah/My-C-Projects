/* write a c program to swap value of two variables.
*/

#include <stdio.h>

int main() {
    int a, b, temp;

    // taking input

    printf("enter value of a: ");
    scanf("%d", &a);

    // swapping values using temp variable
    temp = a;
    a = b;
    b = temp;

    // displaing results
    printf("after swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

// ***********************************************************

// Pseudocode:
// pgsql
// Copy code
// START
//   Declare a, b, temp

//   DISPLAY "Enter value of a:"
//   READ a

//   DISPLAY "Enter value of b:"
//   READ b

//   temp = a
//   a = b
//   b = temp

//   DISPLAY "After swapping:"
//   DISPLAY a
//   DISPLAY b

// END

// *****************************************************************

// Flowchart Steps with Shapes
// Start → 🔵 Oval

// Input a → 🟨 Parallelogram

// Input b → 🟨 Parallelogram

// Store a in temp → 🟥 Rectangle

// Assign b to a → 🟥 Rectangle

// Assign temp to b → 🟥 Rectangle

// Output swapped values of a and b → 🟨 Parallelogram

// End → 🔵 Oval



