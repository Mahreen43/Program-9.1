#include <iostream>

// Function declaration
int findMaximum(int a, int b);

int main() {
    int num1, num2;

    // Input two numbers from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Call the function to find and display the maximum number
    int maxNumber = findMaximum(num1, num2);
    std::cout << "The maximum number is: " << maxNumber << std::endl;

    return 0;
}

// Function definition
int findMaximum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}