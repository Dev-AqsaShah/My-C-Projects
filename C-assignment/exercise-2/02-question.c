/* write a c program to return the absolute value of a long integer. hint: use labs(x); with
#include<stdlib.h>
test data and expected output:
input 1st number (positive or negative): 25
input 2nd number (positive or negative); -125
the absolute value of 1st number is: 25
the absolute value of 2nd number is : 125
*/

#include <stdio.h>
#include   <stdlib.h>  // for labs()

int main() {
    long num1, num2;

    // taking input from user
    printf("Input 1st number (positive or negative): ");
    scanf("%1d", &num1);

    printf("Input 2nd num (positive or negative): ");
    scanf("%1d", &num2);

    // displaying absolute values using labs()
    printf("the absolute value of 1st number is: %1d\n", labs(num1));
    printf("the absolute value of 2nd number is: %d\n", labs(num2));

    return 0;
}

// *********************************************************************************

// Pseudocode:
// pgsql
// Copy code
// START
//   Declare long integers: num1, num2

//   DISPLAY "Input 1st number (positive or negative):"
//   READ num1

//   DISPLAY "Input 2nd number (positive or negative):"
//   READ num2

//   CALCULATE absolute of num1 using labs(num1)
//   CALCULATE absolute of num2 using labs(num2)

//   DISPLAY absolute of num1
//   DISPLAY absolute of num2

// END

// ************************************************************************

// Flowchart :

// Start

// Input first number

// Input second number

// Process:

// Use labs(num1) to get absolute of first number

// Use labs(num2) to get absolute of second number

// Output absolute value of both numbers

// End

