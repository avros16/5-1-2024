// #include <iostream>
// using namespace std; 

// // pass by value and pass by refernce 
// // pass by value - when you define a variable in the main function and send it to a function at the top of the program, this is called a pass by value. The values and variables are COPIED, so they appear in the memory twice. If you update the value in the function, it will not change the values within main. This is what we have been doing in class. to use: " int& a" within the parameters


// // pass by refernce - sending location of variables to function. updating values in function WILL change values in main function. These are not copies of the data sets like in pass by reference. They are located and used by its address. th symbol for address is "&" 


// void test_func(int& x){
//   cout << "in test fun 1 " << x << endl;
//   x= 10;
//   cout << "inside test func" << x << endl;

// }
// // we are not using the same variable in the function above but the code works. this "x" is just a pointer. the address is based ont he value we pass in, in the main function 

// int main() {
//  int a= 5; 
//   cout << "The value of x is " <<a<< "And its address is " <<&a <<endl;
//   test_func(a);
//   cout << "this is after update " << a;


// }