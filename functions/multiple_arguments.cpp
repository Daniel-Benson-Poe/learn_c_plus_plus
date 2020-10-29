# include <iostream>

// Define void function that takes two parameters
void name_x_times(std::string name, int x) {

    while (x > 0) {

        std::cout << name << "\n";  // Print out input name
        x--;  // Decrement x by 1
    }

}

int main() {

    std::string my_name = "Daniel";
    int num = 5;

    // Call name_x_times using my_name and num as arguments
    name_x_times(my_name, num);

}