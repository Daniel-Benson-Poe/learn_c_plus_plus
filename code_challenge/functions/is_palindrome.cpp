# include <iostream>
# include <algorithm>  // Allows for use of reverse() function

/*
Define function is_palindrome() that takes:
string parameter text
Function should return:
true if text is a palindrome
false if text is not a palindrome
*/

bool is_palindrome(std::string text) {
    std::string prev_text = text;
    reverse(text.begin(), text.end());
    
    return prev_text == text;
}

int main() {

    std::cout << is_palindrome("car") << "\n";
    std::cout << is_palindrome("racecar") << "\n";
    std::cout << is_palindrome("menu") << "\n";
    std::cout << is_palindrome("hannah") << "\n";

}