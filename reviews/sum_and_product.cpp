# include <iostream>
# include <vector>

int main() {

    /*
    Program that finds the sum of even numbers and product of odd numbers
    in a given vector and outputs the results.
    */

    // Start by creating our vector
    std::vector<int> vect;

    // Add items into the vector
    vect.push_back(2);
    vect.push_back(4);
    vect.push_back(3);
    vect.push_back(6);
    vect.push_back(1);
    vect.push_back(9);

    // Declare two int variables for the sum of evens and the product of odds
    int sum_even = 0;  // initialize to 0
    int product_odd = 1;  // initialize to 1

    // Create a for loop that iterates through the vector
    for (int i = 0; i < vect.size(); i++) {

        if (vect[i] % 2 == 0) {

            sum_even = sum_even + vect[i];
        }

        else {

            product_odd = product_odd * vect[i];
        }
    }

    // Output the sum of even numbers
    std::cout << "Sum of even numbers is " << sum_even << "\n";
    // Output the product of odd numbers
    std::cout << "Product of odd numbers is " << product_odd << "\n";

}