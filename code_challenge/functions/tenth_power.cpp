# include <iostream>
# include <cmath>  // Allows us the use of pow() method

/*
Write function tenth_power() having:
int parameter named num
Function should return parameter raised to the 10th power
*/

int tenth_power(int num) {

    return pow(num, 10);
}

int main() {

    // Call tenth_power function
    std::cout << tenth_power(0) << "\n";
    std::cout << tenth_power(1) << "\n";
    std::cout << tenth_power(2) << "\n";

}