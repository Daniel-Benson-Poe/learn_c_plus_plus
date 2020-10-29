# include <iostream>
# include <vector>

/*
Write function first_three_multiples having:
int parameter named num
Function should return vector of the first three
multiples of num in ascending order.
Ex: first_three_multiples(7)
>> 7, 14, 21
*/

std::vector<int> first_three_multiples(int num) {

    // Declare empty new vector
    std::vector<int> multiples;

    // Add values in ascending order to vector
    multiples.push_back(num*1);
    multiples.push_back(num*2);
    multiples.push_back(num*3);
    return multiples;
    
}

int main() {

    // Call first_three_multiples function using a for loop to iterate through the vector
    for (int element : first_three_multiples(8)) {
        std::cout << element << "\n";

  }


}