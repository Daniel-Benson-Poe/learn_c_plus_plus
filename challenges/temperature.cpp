# include <iostream>

int main() {

    /*
    The mad scientist Kelvin has mastered predicting the weather in his mountain-side meteorology lab.
    R ecently, Kelvin began publishing his weather forecasts on his website, however, there’s a problem: All of his forecasts describe the temperature in Fahrenheit degrees.
    Let’s convert a temperature from Fahrenheit (F) to Celsius (C).
    The formula is the following:
    C = (F - 32)/1.8
    */

   // Current temperature in New York: 66˚ Fahrenheit; for future note, alt+k = ˚
    double tempf = 66;  // declare double variable for current temp in ˚F
    double tempc;  // declare double variable for eventual calculation of ˚C

    tempc = (tempf - 32)/1.8;  // Perform the ˚F to ˚C conversion

    // Now create our output
    std::cout << "The temp is " << tempc << " degrees Celsius.\n";
}