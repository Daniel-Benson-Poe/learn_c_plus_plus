# include <iostream>

// Define get_emergency_number()
void get_emergency_number(std::string emergency_number) {

    std::cout << "Dial " << emergency_number << "\n";
}

int main() {

    // Original emergency services number
    std::string old_emergency_number = "999";

    // New emergency number
    std::string new_emergency_number = "0118 999 881 999 119 725 3";

    // Call get_emergency_number using the new_emergency_number as the argument
    get_emergency_number(new_emergency_number);

}