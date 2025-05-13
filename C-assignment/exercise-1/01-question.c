/* write a c program that takes hours and minutes as input, and calculate the total number of minutes.
expected output:
input hours: 5
input minutes: 37
total: 337 minutes. */

#include <stdio.h>

int main() {
    int hours, minutes, totalMinutes;

    // taking input from the user
    printf("input hours: ");
    scanf("%d", &hours);

    printf("input minutes: ");
    scanf("%d", &minutes);

    // calculating total minutes
    totalMinutes = (hours * 60) + minutes;

    // displaying result
    printf("Total: %d minutes.\n", totalMinutes);

    return 0;
}

// ***********************************************************************************

// Pseudocode

// START
//   Declare variables: hours, minutes, totalMinutes

//   DISPLAY "Input hours:"
//   READ hours

//   DISPLAY "Input minutes:"
//   READ minutes

//   CALCULATE totalMinutes = (hours * 60) + minutes

//   DISPLAY "Total: totalMinutes minutes."

// END

// ****************************************************************************************

// Flowchart Steps with Shapes
// Start → 🔵 Oval

// Input hours → 🟨 Parallelogram

// Input minutes → 🟨 Parallelogram

// Calculate totalMinutes = (hours × 60) + minutes → 🟥 Rectangle

// Output total minutes → 🟨 Parallelogram

// End → 🔵 Oval

