// write a c program to print a character of given ASCII value. 


#include <stdio.h>

int main() {
    int ascii;

    // Ask user to enter an ASCII value
    printf("Enter an ASCII value (0-127): ");
    scanf("%d", &ascii);

    // Print the character
    printf("The character for ASCII value %d is '%c'\n", ascii, ascii);

    return 0;
}

// **************************************************************

// Pseudocode

// START
//     Declare integer variable ascii
//     Prompt user to enter an ASCII value
//     Read ascii
//     Print character using %c format
// END

// *****************************************************

// flowchart

// [ Start ]                        🔵
// |
// [ Input ASCII value as integer ]         🟨
// |
// [ Print corresponding character ]        🟨
// |
// [ End ]                       🔵
