# include <iostream>

int main() {

    // We can use a for loop if we know exactly how many times we want to iterate

    /*
    A for loop has the following format:
    for (initialization of counter; continuation condition; change in counter)
    */
    for (int i = 0; i < 10; i=i+2) {  // Run the loop until i is no longer less than 10; increment i after each loop by 2

        std::cout << "I will not throw paper airplanes in class.\n";
    } 
}