# include <iostream>

int main() {

    // You can use << operators to chain things together so that the following lines of code:
    /*
    int age = 28;
    std::cout << "Hello, I am "
    std::cout << age;
    std::cout << " years old\n";
    */

   // can be chained with the following:
   int age = 28;

   std::cout << "Hello, I am " << age << " years old\n";
}