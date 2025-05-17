//  FUNCTIONS

// block of code that performs particular task

// syntax 1
// function prototype --> void printHello();

// syntax 2 
// function  definition
// void printHello() {
//     printf("Hello");
// }

// syntax 3 
// function call
//  int main() {
//     printHello();
//     return 0
// }


#include<stdio.h>

// void printHello();

// int main() {

//     return 0;
// }
// void printHello() {
//     printf("Hello!");
// }

// practice q 
// write a function that prints sallam if user is pakistani and bonjour if the user is french.

void sallam();
void bonjour();

int main() {
    printf("enter f for french and p for pakistan :");
    char ch;
    scanf("%c", &ch);

    if (ch == 'p') {
        sallam();
    } else {
        bonjour();
    }

    return 0;
}

void salam() {
    printf("sallam\n");
}

void bonjour() {
    printf("bonjour\n");
}