# include <iostream>
using namespace std;

int main() {

    /* 
    Write a for loop that outputs each number between 1 and 100 with the following exceptions:
    "Fizz" in place of any number that's a multiple of 3
    "Buzz" in place of any number that's a multiple of 5
    "FizzBuzz" in place of any number that's a multiple of both 3 and 5
    */

   for (int i = 1; i <= 100; i++) {

       if (i % 3 == 0) {
           
           if (i % 5 == 0) {

               cout << "FizzBuzz\n";

           }

           else {

               cout << "Fizz\n";
           }
       }

       else if (i % 5 == 0) {

           cout << "Buzz\n";
       }

       else {

           cout << i << "\n";
       }

   }
}