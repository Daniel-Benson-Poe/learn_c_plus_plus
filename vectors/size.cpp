# include <iostream>
# include <vector>

int main() {

    // Create a vector consisting of a list of groceries
    std::vector<std::string> grocery;

    // Add the following using the push_back method: "Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts", "Ranch Dressing", "Ground Beef", "Beef Jerky", "Hot Dogs", "Bread", "Buns"
    grocery.push_back("Hot Pepper Jam");
    grocery.push_back("Dragon Fruit");
    grocery.push_back("Brussel Sprouts");

    // Print out size of vector before adding more
    std::cout << grocery.size() << "\n";

    // Continue adding items
    grocery.push_back("Ranch Dressing");
    grocery.push_back("Ground Beef");
    grocery.push_back("Beef Jerky");
    grocery.push_back("Hot Dogs");
    grocery.push_back("Bread");
    grocery.push_back("Buns");

    // print out size of the vector now
    std::cout << grocery.size() << "\n";
}