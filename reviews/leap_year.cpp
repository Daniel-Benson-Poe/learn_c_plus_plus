# include <iostream>
# include <stdlib.h>
using namespace std;
// Function to find length of an integer
int countDigit(long long n) {

    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

int main() {
    int year;
    int input_length;
    int leap_year;

    // Ask user to input a year
    cout << "Please type in a year: \n";
    cin >> year;

    // Gather length of the user's input
    input_length = countDigit(year);

    // Check if the year given is a four-digit number
    if (input_length != 4) {
        cout << "I'm sorry, that is not a proper four-digit year. Please try again.\n";
        exit(3);
    }

    // if year can be evenly divided by 4 it is a leap year
    if (year % 4 == 0) {
        if (year % 100 == 0 && year % 400 == 0) {
            leap_year = 1;
        }
    }
    else {
        leap_year = 0;
    }

    // Output whether or not the input year is a leap year based on the above
    if (leap_year) {
        cout << "The year " << year << " is a leap year!\n"; 
    }

    else {
        cout << "The year " << year << " is not a leap year.\n";
    }

}