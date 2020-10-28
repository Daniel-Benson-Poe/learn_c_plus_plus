# include <iostream>
# include <cmath>

int main() {

    // Declare four variables for the four currency types
    int pesos;
    int reais;
    int soles;
    float dollars;
    // Ask user to input number of Pesos
    std::cout << "Enter number of Colombian Pesos: \n";
    std::cin >> pesos;
    // Ask user to input number of reais
    std::cout << "Enter number of Brazilian Reais: \n";
    std::cin >> reais;
    // Ask user to input number of soles
    std::cout << "Enter number of Peruvian Soles: \n";
    std::cin >> soles;

    /*
    Conversion Rates:
    1 Colombian Pesos --> 0.00026 USD
    1 Brazilian Reais --> 0.18 USD
    1 Peruvian Sole --> 0.28 USD
    */

    // Create variable for Pesos to USD conversion
    float peso_conv = pesos * 0.00026;
    // Create variable for Reais to USD conversion
    float reais_conv = reais * 0.18;
    // Create variable for Soles to USD conversion
    float sol_conv = soles * 0.28;
    // Use the conversion numbers to find the total dollar conversion
    dollars = peso_conv + reais_conv + sol_conv;

    std::cout << "US Dollars = $" << dollars << "\n";
}