// write a c program to print ASCII value of given character.

#include <stdio.h>

int main() {
    char ch;

    // Ask user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Print ASCII value
    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}

// **************************************************************

// Pseudocode

// START
//     Declare a character variable ch
//     Prompt user to enter a character
//     Read ch
//     Display ASCII value of ch using %d
// END

// ************************************************

// flowchart

// [ Start ]                      🔵
// |
// [ Input character ch ]              🟨
// |
// [ Print ASCII value of ch as int ]     🟨
// |
// [ End ]                    🔵
