# include <iostream>
# include <cmath>  // This is used in this program for finding the square of a number

int main() {

    /*
    The body mass index (BMI) is commonly used by health and nutrition professionals to estimate human body fat in populations.
    It is computed by taking the individual’s weight in kilograms (kg) and dividing it by the square of their height in meters (m²):
        bmi = weight/height²
    */

   // You can declare multiple variables of the same type using the following method:
   double height, weight, bmi;

   // Ask for user height
   std::cout << "Type in your height (m): ";
   std::cin >> height;

   // Ask the user for their weight
   std::cout << "Type in your weight: ";
   std::cin >> weight;

   // Calculate their BMI
   bmi = weight/pow(height, 2);

   // Output their BMI
   std::cout << "Your Body Mass Index is " << bmi << ".\n";
}