/* write a c program to check whether an integer entered num by the user is odd or even via indicating 0 or 1 binary digit.
*/

#include <stdio.h>

int main() {
    int num;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Use bitwise AND to check LSB (Least Significant Bit)
    int result = num & 1;

    // Output the result
    if (result == 0) {
        printf("The number is Even (Binary indicator: 0)\n");
    } else {
        printf("The number is Odd (Binary indicator: 1)\n");
    }

    return 0;
}


// ********************************************************************

// pseudocode

// START
//     Prompt user to enter an integer
//     Input num

//     result = num AND 1

//     IF result == 0 THEN
//         Display "Even (Binary indicator: 0)"
//     ELSE
//         Display "Odd (Binary indicator: 1)"
// END

// *********************************************************************

//  flowchart

// [ Start ]                        🔵
// |
// [ Input an integer ]                  🟨
// |
// [ result = num & 1 ]                 🟥
// |
// [ result == 0 ? ]                   🔷
// /           \
// Yes             No
// [ Print Even ]   [ Print Odd ]         🟨
// (0 indicator)   (1 indicator)
// \           /
// [ End ]                     🔵

