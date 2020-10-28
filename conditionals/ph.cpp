# include <iostream>

int main() {

    double ph;

    // Ask for user input
    std::cout << "Enter a ph between 1 and 10: \n";
    std::cin >> ph;

    // Write the if, else if, else here:
    if (ph > 7) {
        
        std::cout << "Basic\n";
    }

    else if (ph < 7) {

        std::cout << "Acidic\n";
    }

    else {

        std::cout << "Neutral\n";
    }
}