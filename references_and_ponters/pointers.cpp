# include <iostream>

int main()
{
    /*
    Pointers can be used to store memory
    addresses. Avoiding pointers is usually a good
    way to code as references will do the trick.
    Pointers are syntactically distinguished by the 
    use of the *.
    Ex: int* means "poninter to int"
   */ 

  int power = 9000;

  // Create pointer
  int* ptr = &power;

  // Print ptr
  std::cout << ptr << "\n";

  // We can also use the * to obtain the value 
  // pointed to by the pointer
  std::cout << *ptr << "\n";
}
