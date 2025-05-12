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

// Flowchart :
// Start

// Input a

// Input b

// Store a in temp

// Assign b to a

// Assign temp to b

// Output swapped values of a and b

// End

