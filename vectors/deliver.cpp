# include <iostream>
# include <vector>

int main() {

    // You can iterate through the values in a vector using a for loop

    // Start by creating a vector
    std::vector<double> delivery_order;

    // Add values to the vector
    delivery_order.push_back(8.99);
    delivery_order.push_back(3.75);
    delivery_order.push_back(0.99);
    delivery_order.push_back(5.99);

    // Calculate the total using a for loop
    double total = 0.0;

    for (int i = 0; i < delivery_order.size(); i++) {

        total = total + delivery_order[i];
    }

    std::cout << "Order Total: " << total << "\n";
}