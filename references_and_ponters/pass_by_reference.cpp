# include <iostream>

// Create method for multiplying a number by 3
int triple_local(int i) { 
    /*
    This method changes the value of i ONLY within
    the scope of this method. Any calls of i outside
    will not be changed.
    Ex: for num = 1 and the following inside a different method:
    std::cout triple(num) << "\n";
    std::cout triple(num) << "\n";
    >> 3
    >> 3
    */

    i = i * 3;
    
    return i;
}

int triple_global(int &i) {

    /*
    Adding a reference in the method's parameters allows
    us to change the value of i globally regardless of where
    the value of i (or an alias of i) is called.
    Ex: for num = 1 and the following inside a different method:
    std::cout triple(num) << "\n";
    std::cout triple(num) << "\n";
    >> 3
    >> 9
    */

   i = i * 3;

   return i;
}

int main() {

    /*
     Pass-by-reference refers to passing parameters to a 
     function by using references. This allows the function
     to modify the value of the arguments by using the 
     reference passed in. This allows:
     • Modification of the value of the function arguments
     • Avoiding the creation of copies of vartiable/object
    */
    // Create variable num
    int num = 1;
    // Call triple_local and print out the results
    std::cout << triple_local(num) << "\n";
    std::cout << triple_local(num) << "\n";
    // Reset num to 1 for testing purposes
    num = 1;
    // Call triple_global and print out the results
    std::cout << triple_global(num) << "\n";
    std::cout << triple_global(num) << "\n";

}