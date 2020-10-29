# include <iostream>
# include <vector>  // Allows the use of vectors

int main() {

    // Syntax to create a vector looks like the following:
    // std::vector<type> name;
    // The use of {} is used to initialize vectors with values
    // We can also initialize a vector with a specific number of elements, even if those elements aren't known yet using the following syntax
    // std::vector<type> name(number of elements); This will create an empty vector

    double child[] = {400., 600., 750.};  // Create array we will use to create a vector
    double adult[] = {800., 1200., 1500.};  // Create array we will use to create a vector

    std::vector<double> subway_adult (adult, adult + sizeof(adult) / sizeof(double));
    std::vector<double> subway_child (child, child + sizeof(child) / sizeof(double));

    // We can access individual values by using the index method
    // What number is at index 2 of subway_child?
    std::cout << subway_child[2] << "\n";

}