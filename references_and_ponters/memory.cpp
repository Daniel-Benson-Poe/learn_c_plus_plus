# include <iostream>

int main()
{
    /* 
    The & symbol can also be used to get the memory
    address, or the location in memory, of an object.
    When & is used in a declaration, it is a reference
    When & is used elsewhere, it is an address operator
    */

   int power = 9000;

   // Print power
   std::cout << power << "\n";

   // Print memory address for power
   std::cout << &power << "\n";
}
