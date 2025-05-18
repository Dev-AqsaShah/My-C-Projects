/* write  a c program to convert days to years, weeks and days.
*/

#include <stdio.h>

int main() {
    int totalDays, years, weeks, days;

    // Input total days
    printf("Enter total number of days: ");
    scanf("%d", &totalDays);

    // Calculate years, weeks, and remaining days
    years = totalDays / 365;
    weeks = (totalDays % 365) / 7;
    days = (totalDays % 365) % 7;

    // Output the result
    printf("%d days is equal to %d years, %d weeks, and %d days.\n", totalDays, years, weeks, days);

    return 0;
}


// **********************************************************************************************************

// START
//      Input total days
//     Display "Enter total number of days: "
//     Input totalDays
    
//      Calculate years, weeks, and days
//     years = totalDays / 365
//     weeks = (totalDays % 365) / 7
//     days = (totalDays % 365) % 7

//      Output result
//     Display totalDays, years, weeks, and days
// END

//*************************************************

// Flowchart Steps with Shapes
// Start → 🔵 Oval
  
// Input total days → 🟨 Parallelogram

// Calculate years = totalDays / 365 → 🟥 Rectangle

// Calculate weeks = (totalDays % 365) / 7 → 🟥 Rectangle

// Calculate days = (totalDays % 365) % 7 → 🟥 Rectangle

// Output years, weeks, and days → 🟨 Parallelogram

// End → 🔵 Oval