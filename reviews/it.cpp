# include <iostream>

void on_off() {

    std::string on_off_attempt;
    std::cout << "Hello. IT.\n";
    std::cout << "Have you tried turning it off and on again? y/n\n";
    std::cin >> on_off_attempt;

}


int main() {

    // Conduct IT support
    on_off();
    
    // Check in with Jenn
    std::cout << "Oh hi Jen!\n";
    
    // Conduct IT support again...
    on_off();

    // Check in with Roy
    std::cout << "You stole the stress machine? But that's stealing!\n";
    
    // Conduct IT support yet again...zzzz...
    on_off();

}