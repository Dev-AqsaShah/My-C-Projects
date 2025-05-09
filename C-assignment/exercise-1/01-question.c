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