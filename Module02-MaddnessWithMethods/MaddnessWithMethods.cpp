#include "MaddnessWithMethods.h"
#include <iostream>

// Function to get an integer from the user
int getAnIntFromTheUser() {
    int input;
    std::cout << "Enter an integer: ";
    std::cin >> input;
    return input;
}

// Function to compare two integers and return the larger
int compareTwoInts(int a, int b) {
    return (a > b) ? a : b;
}

// Function to sum two integers
int sumTwoInts(int a, int b) {
    return a + b;
}
