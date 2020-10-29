# include <iostream>

/*
Define function needs_water() that accepts:
int number of days since previous watering
bool value is_succulent
Conditional logic with the following conditions:
If is_succulent is false and days is greater than 3, return "Time to water the plant."
If is_succulent is true and days is 12 or less, return "Don't water the plant!".
If is_succulent is true and days is greater than or equal to 13, return "Go ahead and give the plant a little water.".
Otherwise, return "Don't water the plant!".
Don't print the strings, return them from the function.
*/

std::string needs_water(int days, bool is_succulent) {

    // Check if is_succulent is false and days is greater than 3
    if (is_succulent == false && days > 3) {

        return "Time to water the plant.";
    }

    // Check if is_succulent is true
    else if (is_succulent == true) {

        // Check if days is 12 or less
        if (days <= 12) {

            return "Don't water the plant!";
        }

        // Check if days is greater than or equal to 13
        else if (days >= 13) {

            return "Go ahead and give the plant a little water.";
        }
    }

    return "Don't water the plant!";

}

int main() {

    // Call needs_water() function
    std::cout << needs_water(10, false) << "\n";
    std::cout << needs_water(10, true) << "\n";
    std::cout << needs_water(13, true) << "\n";
    std::cout << needs_water(2, false) << "\n";
}