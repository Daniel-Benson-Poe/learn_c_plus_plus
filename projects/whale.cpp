# include <iostream>
# include <vector>
# include <string>

int main() {

    // Declare string variables holding the human phrase we want to whaleify
    std::string human = "hello world!";

    // Declare new vector to hold the vowels that whales use for their speach (not including y)
    std::vector<char> whale_alphabet;

    // Use push_back to add the vowels to the vector
    // Char types must be wrapped in single quotations '' NOT double quotations ""
    whale_alphabet.push_back('a');
    whale_alphabet.push_back('e');
    whale_alphabet.push_back('i');
    whale_alphabet.push_back('o');
    whale_alphabet.push_back('u');

    // Declare char vector holding the translated phrase to whale speak
    std::vector<char> result;

    // Create for loop to iterate through the input string
    for (int i = 0; i < human.size(); i++) {

        for (int j = 0; j < whale_alphabet.size(); j++) {

            if (human[i] == whale_alphabet[j]) {

                result.push_back(human[i]);
            }
        }

        // Whales double the e's and u's in their language.
        if (human[i] == 'e' || human[i] == 'u') {

            result.push_back(human[i]);
        } 
    }

    
    // Create loop to output each character in the results vector
    for (int i = 0; i < result.size(); i++) {

        std::cout << result[i];
    }

    std::cout << "\n";


}