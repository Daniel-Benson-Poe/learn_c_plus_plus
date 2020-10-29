# include <iostream>

/*
Write function average() that takes:
double parameter named num1
double parameter named num2
Should return a double that is the average of the arguments passed in.
*/

double average(double num1, double num2) {

    return (num1 + num2) / 2;
}

int main() {

    // Call average function
    std::cout << average(42.0, 24.0) << "\n";
    std::cout << average(1.0, 2.0) << "\n";
    
}