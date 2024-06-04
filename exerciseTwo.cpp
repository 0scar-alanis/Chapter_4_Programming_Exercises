// Write a program that prompts the user to input three numbers.
// The program should then output the numbers in ascending order: from smallest to largest.

#include<iostream>

int main() {
    double num1, num2, num3;

    std::cout << "Please enter threee integers" << std::endl;
    std::cin >> num1 >> num2 >> num3;
    std::cout << std:: endl;

    std::cout << "The integers you entered are" << num1 << num2 << num3 << std::endl;
    if(num1> num2)
        std::cout << "The largest number is: " << num1 << std::endl;
}