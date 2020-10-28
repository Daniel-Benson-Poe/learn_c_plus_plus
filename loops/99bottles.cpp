# include <iostream>

int main() {

    // Create a for loop that repeats verses of the 99 bottles until reaching 0
    for (int i = 99; i > 0; i--) {

        std::cout << i << " bottles of beer on the wall.\n";
        std::cout << i << " bottles of beer.\n";
        std::cout << "Take one down, pass it around.\n";
        std::cout << i-1 << " bottles of beer on the wall.\n";
    }
}