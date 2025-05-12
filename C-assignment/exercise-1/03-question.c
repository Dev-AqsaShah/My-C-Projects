/* write a program in C to calculate the sum of three numbers with getting input in one line.
expected output:
input three numbers: 5 10 15
the sum of three number: 30
*/

// ***********************************************

// Pseudocode:

// START
//   Declare variables: num1, num2, num3, sum

//   DISPLAY "Input three numbers:"
//   READ num1, num2, num3

//   CALCULATE sum = num1 + num2 + num3

//   DISPLAY "The sum of three numbers: sum"

// END

// ****************************************************

// Flowchart:
// Start

// Input three numbers (in one line)

// Process: sum = num1 + num2 + num3

// Output the sum

// End



#include <stdio.h>

int main() {
    int num1, num2, num3, sum;

    // taking input in one line
    printf("Input three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // displaying result
    printf("the sum of three numbers: %d\n", sum);

    return 0;
}
