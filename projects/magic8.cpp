# include <iostream>
# include <cstdlib>  // Allows use of rand() to generate a random number
using namespace std;

int main() {

    // Your future is here
    cout << "MAGIC 8-BALL:\n";
    // Testing purposes
    // cout << rand() % 10 << "\n";  // Use % 10 to get a random number between 0-9
    // cout << rand() % 10 << "\n";
    // cout << rand() % 10 << "\n";

    // Declare variable and give it a random number
    // int answer = rand() % 10;
    // cout << answer << "\n";  // This number doesn't ever change though! 

    // To fix this issue we need to use the following format:
    srand(time(NULL));  // Sets the seed of the random number generator
    int answer = rand() % 10;

    // Create if else statements to check answer and output our magic-8 phrase
    if (answer == 0) {
        cout << "It is certain.\n";
    }

    else if (answer == 1) {
        cout << "Without a doubt.\n";
    }

    else if (answer == 2) {
        cout << "You may rely on it\n";
    }

    else if (answer == 3) {
        cout << "Most likely.\n";
    }

    else if (answer == 4) {
        cout << "Yes.\n";
    }

    else if (answer == 5) {
        cout << "Reply hazy, try again.\n";
    }

    else if (answer == 6) {
        cout << "Better not tell you now.\n";
    }

    else if (answer == 7) {
        cout << "Concentrate and ask again.\n";
    }

    else if (answer == 8) {
        cout << "My reply is no.\n";
    } 

    else {
        cout << "Very doubtful.\n";
    }

}