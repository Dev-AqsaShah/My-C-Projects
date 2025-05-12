/* write a program in C that takes minutes as input, and display the total number of hours and minutes.
expected output:
input minutes: 546
9 hours, 6 minutes
*/

// ******************************************************

// Pseudocode:

// START
//   Declare variables: totalMinutes, hours, minutes

//   DISPLAY "Input minutes:"
//   READ totalMinutes

//   CALCULATE hours = totalMinutes / 60
//   CALCULATE minutes = totalMinutes % 60

//   DISPLAY hours and minutes

// END

// *********************************************************

// Flowchart:

// Start

// Input total minutes

// Process:

// hours = totalMinutes / 60

// minutes = totalMinutes % 60

// Output: Display hours and minutes

// End



#include <stdio.h>

int main() {
    int  totalMinutes, hours, minutes;

    // taking input from user
    printf("Input minutes: ");
    scanf("%d", &totalMinutes);

    // convert to hours and minutes
    hours = totalMinutes / 60;
    minutes = totalMinutes % 60;

    // display result
    printf("%d hours, %d minutes\n", hours, minutes);

    return 0;
}