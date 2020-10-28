# include <iostream>
# include <cmath>

int main() {
    
    // Declare three float variables to use in quadratice equation
    float a;
    float b;
    float c;

    // Ask user to input value for a
    std::cout << "Enter a: \n";
    std::cin >> a;
    // Ask user to input value for b
    std::cout << "Enter b: \n";
    std::cin >> b;
    // Ask user to input value for c
    std::cout << "Enter c: \n";
    std::cin >> c;

    // Declare float variable for root1 
    float root1;
    // Declare float variable for root2
    float root2;

    // Solve for root1
    root1 = (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a);
    
    // Solve for root2
    root2 = (-b - sqrt(pow(b, 2) - 4*a*c))/(2*a);

    // Output root1
    std::cout << "Root 1 is " << root1 << "\n";

    // Output root2
    std::cout << "Root 2 is " << root2 << "\n";
}