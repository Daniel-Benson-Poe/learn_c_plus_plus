# include <iostream>
# include <vector>

int main() {

    std::vector<std::string> last_jedi;

    // Add characters here using push_back method
    // push_back() allows you to add a value to the end of a vector
    last_jedi.push_back("kylo");
    last_jedi.push_back("rey");
    last_jedi.push_back("luke");
    last_jedi.push_back("finn");

    std::cout << last_jedi[0] << " ";
    std::cout << last_jedi[1] << " ";
    std::cout << last_jedi[2] << " ";
    std::cout << last_jedi[3] << " ";
}