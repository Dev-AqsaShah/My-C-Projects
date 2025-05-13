/*write a c program to print convert feet to meter: hint: 3.2808399 feet is equal to one meter.
*/

#include <stdio.h>

int main() {
    float feet, meters;

    // 1 meter = 3.2808399 feet
    const float FEET_IN_METER = 3.2808399;

    // ask the user to input the length in feet
    printf("Enter length in feet: ");
    scanf("%f", &feet);

    // convert feet to meters
    meters = feet / FEET_IN_METER;

    // display the result
    printf("%.2f feet is equal to %.4f meters.\n", feet, meters);

    return 0;

}

// ************************************************

// Pseudocode 

// Start

// Declare variables feet and meters as float
// Set constant FEET_IN_METER = 3.2808399

// Display "Enter length in feet:"
// Input feet

// Compute meters = feet / FEET_IN_METER

// Display feet "feet is equal to" meters "meters."

// End

// ****************************************************

// Flowchart 
// Start → 🟢 Oval

// Declare variables → 🔷 Rectangle

// Display "Enter length in feet:" → 🟨 Parallelogram

// Input feet → 🟨 Parallelogram

// Calculate meters = feet / 3.2808399 → 🔷 Rectangle

// Display meters → 🟨 Parallelogram

// End → 🟢 Oval