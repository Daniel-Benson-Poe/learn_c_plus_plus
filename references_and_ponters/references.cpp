#include <iostream>

int main() {

    /*
     A reference variable is an alias for something elst
     Say we have an int variable called soda
     An alias can be created using an & character
     This is like a copy that when changes also changes
     The value of the original variable
     Aliases cannot be changed to alias something else
    */
    
    // Declare and initialize a variable called soda
    int soda = 99;
    // Create an alias for soda called pop
    int &pop = soda;

    // Output the current value of both soda and pop
    std::cout << "Soda: " << soda << "\n";
    std::cout << "Pop: " << pop << "\n";

    // Add 1 to pop
    pop++;

    // Output the current value of both soda and pop
    std::cout << "Soda: " << soda << "\n";
    std::cout << "Pop: " << pop << "\n";
}