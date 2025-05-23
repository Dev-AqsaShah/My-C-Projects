/*write a program in C that takes age in years and calculates the total number of months. 
expected output:
input your age in years: 5
total month in your age is: 60
*/

#include <stdio.h>

int main() {
    int years, months;

    // taking input from user
    printf("Input your age in years: ");
    scanf("%d", &years);

    // calculating total months
    months = years * 12;

    // displaying result
    printf("Total months in your age is: %d\n", months);

    return 0;
}


// ********************************************************************************************

// Pseudocode:

// START
//   Declare variables: years, months

//   DISPLAY "Input your age in years:"
//   READ years

//   CALCULATE months = years * 12

//   DISPLAY "Total months in your age is: months"

// END

// ************************************************************************************

// Flowchart Steps with Shapes
// Start → 🔵 Oval

// Input age in years → 🟨 Parallelogram

// Process: months = years × 12 → 🟥 Rectangle

// Output total months → 🟨 Parallelogram

// End → 🔵 Oval