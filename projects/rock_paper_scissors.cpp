# include <iostream>
# include <stdlib.h>  // Allows the use of rand() for a random number generator; also allows us to terminate the program early
using namespace std;

/*
The following program will allow the user to choose one of five options:
rock, paper, scissors, lizard, or spock.
Once the user's choice is selected the computer will randomly select its own.
The two choices will be compared and a winner (or tie) will be announced.
Winners are determined using the following format:
scissors cuts paper
paper covers rock
rock crushes lizard
lizard poisons spock
spock smashes scissors
scissors decapitates lizard
lizard eats paper
paper disproves spock
spock vaporizes rock
and as it always has, rock crushes scissors
*/

int main() {

    // Live long and prosper
    srand (time(NULL));  // Allows for a changing seed thus a non static random number (without this we would get the same number every time)

    int computer = rand() % 5 + 1;  // Random number selected for computer's choice; + 1 avoids a 0 selection giving the range 1-3

    int user = 0;  // Will hold the user's choice

    cout << "====================\n";
    cout << "rock paper scissors!\n";
    cout << "====================\n";

    cout << "1) ✊\n";
    cout << "2) ✋\n";
    cout << "3) ✌️\n";
    cout << "4) 🦎\n";
    cout << "5) 🖖\n";

    cout << "Enter the number corresponding to your choice...GO!!! \n";
    cin >> user;

    /* Conditional logic that determines the winner based on the following:
    scissors cuts paper
    paper covers rock
    rock crushes lizard
    lizard poisons spock
    spock smashes scissors
    scissors decapitates lizard
    lizard eats paper
    paper disproves spock
    spock vaporizes rock
    and as it always has, rock crushes scissors
    */

   if (user == computer) {

       cout << "It was a draw! Play again to determine a winner.\n";
       exit(3);  // Terminate the program
   }

   if (user == 1) {

       if (computer == 2) {

           cout << "Paper covers rock. You lose! Please try again.\n";
       }

       else if (computer == 3) {

           cout << "Rock crushes scissors. You win! Play again soon.\n";
       }

       else if (computer == 4) {

           cout << "Rock crushes lizard. You win! Play again soon.\n";
       }

       else {

           cout << "Spock vaporizes rock. You lose! Please try again.\n";
       }
   }

   else if (user == 2) {

       if (computer == 1) {

           cout << "Paper covers rock. You win! Play again soon.\n";

       }

       else if (computer == 3) {

           cout << "Scissors cuts paper. You lose! Please try again.\n";

       }

       else if (computer == 4) {

           cout << "Lizard eats paper. You lose! Please try again.\n";

       }

       else {

           cout << "Paper disproves spock. You win! Play again soon.\n";

       }

   }

   else  if (user == 3) {

       if (computer == 1) {

           cout << "Rock crushes scissors. You lose! Please try again.\n";
       }

       else if (computer == 2) {

           cout << "Scissors cuts paper. You win! Play again soon.\n";
       }

       else if (computer == 4) {

           cout << "Scissors decapitates lizard. You win! Play again soon.\n";

       }

       else {

           cout << "Spock smashes scissors. You lose! Please try again.\n";

       }
   }

   else if (user == 4) {

       if (computer == 1) {

           cout << "Rock crushes lizard. You lose! Please try again.\n";

       }

       else if (computer == 2) {

           cout << "Lizard eats paper. You win! Play again soon.\n";

       }

       else if (computer == 3) {

           cout << "Scissors decapitates lizard. You lose! Please try again.\n";

       }

       else {

           cout << "Lizard poisons spock. You win! Play again soon.\n";

       }
   }

   else {

       if (computer == 1) {

           cout << "Spock vaporizes rock. You win! Play again soon.\n";

       }

       else if (computer == 2) {

           cout << "Paper disproves spock. You lose! Please try again.\n";


       }

       else if (computer == 3) {

           cout << "Spock smashes scissors. You win! Play again soon.\n";
           
       }

       else {

           cout << "Lizard poisons spock. You lose! Please try again.\n";

       }
   }
    
    
}