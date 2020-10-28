# include <iostream>
using namespace std;

int main() {

    // Loopy time!
    // Declare int variable for user's guess
    int guess;

    // Declare variable for number of tries and initiate it with 0
    int tries = 0;

    // Give the user instructions
    cout << "I have a number 1-10.\n";
    cout << "Please guess it: \n";
    cin >> guess;

    // While loop goes here
    while (guess != 8 && tries < 50) {

        cout << "Wrong guess. Try again!\n";
        cin >> guess;

        tries++;  // Increment tries by 1
    }

    if (guess == 8) {

        cout << "You got it!\n";
    }

    else {

        cout << "I'm sorry, you did not guess in the given number of tries. Please play again.\n";
    }
}