// Write a program that prompts the user to input a number.
// The program should then output the number and message saying whether the number is
// positive, negative, or zero.

#include <iostream>

int main(){
    double number;

    std::cout << "Please enter a number: " << std::endl;
    std::cin >> number;

    if(number<0){
        std::cout << "The number you entered is negative." << std::endl;
    }
    else if (number==0){
        std::cout << "The number you entered is zero." << std::endl;
    }
    else if(number>0){
        std::cout << "The number you entered is positive." << std::endl;
    }
}