# include <iostream>

int square(int const &i) {

    return i * i;
} 

int main()
{
    
    /*
    The const keyword tells the compiler that
    we don't want to change something.
    ex: double const pi = 3.14;
    With const passed to pi, the variable pi
    cannot be changed again.
    We can use const in a function parameter as well for
    times in which we know that we want to write a function
    with an unchanging parameter
    ex: int triple(int const i) {
        return i * 3; }
    A compiler error will occur if i is changed at all
    inside of this function.
    Finally, we can do the same for references. This will
    make a reference to the argument while saving computational
    cost of making a copy of the argument.
    */

   int side = 5;

   std::cout << square(side) << "\n";

}
