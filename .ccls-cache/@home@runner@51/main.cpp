#include <iostream>
using namespace std; 

// pass by value and pass by refernce 
// pass by value - when you define a variable in the main function and send it to a function at the top of the program, this is called a pass by value. The values and variables are COPIED, so they appear in the memory twice. If you update the value in the function, it will not change the values within main. 


// pass by refernce - sending location of variables to function. updating values in function WILL change values in main function. These are not copies of the data sets like in pass by reference. They are located and used by its address. th symbol for address is "&" 

int main() {
 int x= 5; 
  cout << "The value of x is " <<x<< "And its address is " <<&x;

  
}