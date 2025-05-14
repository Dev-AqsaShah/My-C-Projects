/* write a C program to print the following characters in reverse.
test characters: "X", "M", "L"
expected output:
the reverse of XML is LMX
*/


#include <stdio.h>

int main() {
    // Declare characters
    char ch1 = 'X', ch2 = 'M', ch3 = 'L';

    // Print the characters in reverse
    printf("The reverse of %c%c%c is %c%c%c\n", ch1, ch2, ch3, ch3, ch2, ch1);

    return 0;
}

// *************************************************************************

// pseudocode

// START
//     Define characters ch1 = 'X', ch2 = 'M', ch3 = 'L'
//     Display: "The reverse of ch1 ch2 ch3 is ch3 ch2 ch1"
// END

// ****************************************************

// flowchart

// [ Start ]                          🔵
// |
// [ Declare ch1 = 'X', ch2 = 'M', ch3 = 'L' ] 🟥
// |
// [ Print "The reverse of XML is LMX" ]        🟨
// |
// [ End ]                         🔵
