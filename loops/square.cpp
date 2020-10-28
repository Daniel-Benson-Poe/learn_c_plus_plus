# include <iostream>
# include <cmath>  // Used for pow(x, y) method
using namespace std;

int main() {

    // Declare int variable for our iterator and initialize to 0
    // Declare int variable for our squared result and initialize to 0
    int i = 0;
    int square = 0;

    // Loop through while i is less than 10
    while (i < 10) {

        // Square the iterator
        square = pow(i, 2);  // pow has the format: pow(base, power)
        cout << i << "   " << square << "\n";  // Output the iteration number and its square
        i++;  // Increment i by 1
    }
}