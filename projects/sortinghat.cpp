# include <iostream>
using namespace std;

int main() {

    // The magic starts here.
    // Declare int variables for the houses and initialize them to 0
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    // There are four questions that will be asked to the user. Declare int variables for their answers
    int answer1;
    int answer2;
    int answer3;
    int answer4;

    // Declare int variable for max initialized to 0
    int max = 0;

    // Declare empty string called house
    string house;

    // Output statement to tell user that they have started the quiz
    cout << "The Sorting Hat Quiz!\n";

    // Display first question and possible answers
    cout << "Q1) When I'm dead, I want people to remember me as:\n";
    cout << "   1) The Good\n   2) The Great\n   3) The Wise\n   4) The Bold\n";
    cin >> answer1;

    // Logic flow that determines where to award points based on user answer
    if (answer1 == 1) {

        hufflepuff++;
    }
    else if (answer1 == 2) {

        slytherin++;

    }

    else if (answer1 == 3) {

        ravenclaw++;

    }

    else if (answer1 == 4) {

        gryffindor++;

    }

    else {

        cout << "Invalid input.\n";
    }


    // Display second question and possible answers
    cout << "Q2) Dawn or Dusk?\n";
    cout << "   1) Dawn\n   2) Dusk\n";
    cin >> answer2;

    // Logic flow that determines where to award points based on user answer

    if (answer2 == 1) {
        
        gryffindor++;
        ravenclaw++;

    }

    else if (answer2 == 2) {

        hufflepuff++;
        slytherin++;

    }

    else {

        cout << "Invalid input.\n";

    }

    // Display third question and possible answers
    cout << "Q3) Which kind of instrument most pleases your ear?\n";
    cout << "    1) The violin\n    2) The trumpet\n    3) The piano\n    4) The drum\n";
    cin >> answer3;

    // Logic flow that determines where to award points based on user answer
    if (answer3 == 1) {

        slytherin++;

    }

    else if (answer3 == 2) {

        hufflepuff++;

    }

    else if (answer3 == 3) {

        ravenclaw++;

    }

    else if (answer3 == 4) {

        gryffindor++;

    }

    else {
        
        cout << "Invalid input.";
    }

    // Display final question and possible answers
    cout << "Q4) Which road tempts you most?\n";
    cout << "    1) The wide, sunny grassy lane\n    2) The narrow, dark, lantern-lit alley\n    3) The twisting, leaf-strewn path through woods\n    4) The cobbled street lined (ancient buildings)\n";
    cin >> answer4;

    // Logic flow that determines where to award points based on user answer
    if (answer4 == 1) {

        hufflepuff++;

    }

    else if (answer4 == 2) {

        slytherin++;

    }

    else if (answer4 == 3) {

        gryffindor++;

    }

    else if (answer4 == 4) {

        ravenclaw++;

    }

    else {

        cout << "Invalid input.\n";

    }

    // Find which house has the most points and output the sorting hat's decision
    if (gryffindor > max) {

        max = gryffindor;
        house = "Gryffindor";
    }

    if (hufflepuff > max) {

        max = hufflepuff;
        house = "Hufflepuff";
    }

    if (ravenclaw > max) {

        max = ravenclaw;
        house = "Ravenclaw";
    }

    if (slytherin > max) {

        max = slytherin;
        house = "Slytherin";
    }

    cout << "Hmmm...\n";
    cout << "Yes, I'm thinking...";
    cout << "...\n...\n...\n...\n";
    cout << house << "!\n";

}