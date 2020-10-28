# include <iostream>
# include <cmath>

/*
Dogs mature at a faster rate than human beings. If you own a dog, you might’ve heard this rule: 
one year for Snoopy equals seven years for you. Turns out, the math isn’t that simple. 
Dogs mature more quickly than we do early on.
Here’s how we can convert your dog’s age into human years:

The first two years of a dog’s life count as 21 human years.
Each following year counts as 4 human years.

So a one-year-old dog is 10.5 years old in human years, and a two-year-old dog is 21 years old in 
human years… hmm this is about to get more complicated. Before you start doing the math in your head, 
let a computer take care of it!

Write a C++ program called dog_years.cpp to calculate the age, in human years, of any dog older than 2.
*/

int main() {
    // Declare variable for dog age and set it to 5
    int dog_age = 5;
    // Declare variable for dog age in human years
    int human_age;
    // Declare variable for dog's first two years: 21 human years
    int early_years = 21;
    // Declare variable for dog's later years
    int later_years;

    // Set later_years to age of dog -2 all multiplied by 4
    later_years = (dog_age - 2) * 4;

    // Set human_years to the sum of early_years and later_years
    human_age = early_years + later_years;

    // Output the age in human years
    std::cout << "My name is Ghost! Ruff ruff, I am " << human_age << " years old in human years.\n";

}