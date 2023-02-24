// Tutorial 025.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Have a user type an Integer
// Create a function named isEven() 
// Use % operator to see if it is even or not

int enterInt()
{
    std::cout << "Enter an Integer: ";
    int numberEntered{};
    std::cin >> numberEntered;

    return numberEntered;
}

void isEven(int number)
{
    if (number % 2 == 0)
        std::cout << "The Integer " << number << " is Even";
    else 
        std::cout << "The Integer " << number << " is Odd"; 
}

int main()
{

    int numberEntered{ enterInt() };
    isEven(numberEntered); 

    return 0;

}
