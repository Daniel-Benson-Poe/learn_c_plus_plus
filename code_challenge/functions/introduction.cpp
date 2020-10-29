# include <iostream>
/*
Write function introduction() with no return value. Must contain:
string parameter named first_name
string parameter named last_name
Function prints out last_name followed by a comma, a space, first_name another space,
and last_name again.
Ex: introduction("James", "Bond")
>> Bond, James Bond
*/

void introduction(std::string first_name, std::string last_name) {

    std::cout << last_name << ", " << first_name << " " << last_name << "\n";
}

int main() {

    // Call introduction function
    introduction("Daniel", "Benson");

}