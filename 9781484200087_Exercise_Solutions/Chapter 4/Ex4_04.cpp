// Exercise 4.4 Finding the range for an integer. 
// This is just a question of bolting sufficent conditional operators together
// in an expression. 

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int n = 0;
  cout << "Enter an integer: ";
  cin >> n;

  
  cout << "The value is " 
    << (n<=20 ? "not greater than 20." : (n<=30 ? "greater than 20 and not greater than 30." :
              (n<=100 ? "greater than 30 and not exceeding 100.": "greater than 100." )))
    << endl;

  return 0;
}