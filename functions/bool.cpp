# include <iostream>

bool needs_it_support() {

    bool support;

    std::cout << "Hello. IT. Have you tried turning it off and on again? \nEnter 1 for yes, 0 for no.\n";
    std::cin >> support;
    return support;
}

int main() {

    // print out the call to our created function
    std::cout << needs_it_support() << "\n";
}