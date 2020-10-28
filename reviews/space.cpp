# include <iostream>
# include <cstdlib>  // This included to allow declaring string variable
# include <stdlib.h> // This included to allow exit to terminate the program
using namespace std;  // This call allows you to bypass using preceeding "std::" calls

int main() {

    int earth_weight;
    int user_choice;
    float mercury_weight = 0.38;
    float venus_weight = 0.91;
    float mars_weight = 0.38;
    float jupiter_weight = 2.34;
    float saturn_weight = 1.06;
    float uranus_weight = 0.92;
    float neptune_weight = 1.19;
    float selected_weight;
    string selected_planet;

    // Ask for weight on Earth
    cout << "What is your weight on Earth? \n";
    cin >> earth_weight;

    // Ask the user to input the number corresponding to the planet they wish 
    // to fight on
    cout << "The planets are numbered as follows: \n";
    cout << "1. Mercury\n2. Venus\n3. Mars\n4. Jupiter\n5. Saturn\n6. Uranus\n7. Neptune\n";
    cout << "Please enter the number corresponding to the planet you wish to fight on: \n";
    cin >> user_choice;

    if (user_choice == 1) {
        selected_weight = earth_weight * mercury_weight;
        selected_planet = "Mercury";
    }
    else if (user_choice == 2) {
        selected_weight = earth_weight * venus_weight;
        selected_planet = "Venus";
    }
    else if (user_choice == 3) {
        selected_weight = earth_weight * mars_weight;
        selected_planet = "Mars";
    }
    else if (user_choice == 4) {
        selected_weight = earth_weight * jupiter_weight;
        selected_planet = "Jupiter";
    }
    else if (user_choice == 5) {
        selected_weight = earth_weight * saturn_weight;
        selected_planet = "Saturn";
    }
    else if (user_choice == 6) {
        selected_weight = earth_weight * uranus_weight;
        selected_planet = "Uranus";
    }
    else if (user_choice == 7) {
        selected_weight = earth_weight * neptune_weight;
        selected_planet = "Neptune";
    }
    else {
        cout << "I'm sorry, that is not a valid number. Try again.\n";
        exit(3);
    }

    // Output the weight on the user's selected planet
    cout << "Your weight on the planet " << selected_planet << " is " << selected_weight << ".\n";



}