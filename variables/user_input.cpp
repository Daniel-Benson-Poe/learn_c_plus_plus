# include <iostream>

int main() {
    
    // Just as we can use cout for output, we can use cin to obtain user input
    int tip = 0;

    std::cout << "Enter tip amount: \n";
    std::cin >> tip;  // Notice the different >> operator for input, with the second > specifying where the input goes

    // Let's create an output to ensure that the input saved correctly
    std::cout << "Your tip was: " << tip << "\n";
}