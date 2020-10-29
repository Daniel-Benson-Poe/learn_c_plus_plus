# include <iostream>

// The void output is used when you don't want a return value. This is useful for functions
// that only print things out to the terminal.
void oscar_wilde_quote() {

    std::cout << "The highest, as the lowest, form of criticism is a mode of autobiography.\n";
}

int main() {

    // Call our created function
    oscar_wilde_quote();

}