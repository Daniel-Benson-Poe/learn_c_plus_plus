# include <iostream>

int main() {

    /*
    The mad scientist Kelvin has mastered predicting the weather in his mountain-side meteorology lab.
    R ecently, Kelvin began publishing his weather forecasts on his website, however, there’s a problem: All of his forecasts describe the temperature in Fahrenheit degrees.
    Let’s convert a temperature from Fahrenheit (F) to Celsius (C).
    The formula is the following:
    C = (F - 32)/1.8
    */

   double tempf;
   double tempc;
   // Ask the user to input the temperature at their current location
   std::cout << "Please type in the temperature in Fahrenheit where you are located.\n";
   
    std::cin >> tempf;
    tempc = (tempf - 32)/1.8;  // Perform the ˚F to ˚C conversion

    // Now create our output
    std::cout << "The temperature in Celsius where you are at is " << tempc << " degrees Celsius.\n";
}