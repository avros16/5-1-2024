#include <iostream>
using namespace std; 


void swap(int& a, int& b){
  int e{0};
  e=b;
  b=a;
  a=e;

}

int main() {

int a{5};
int b{7};

swap(a,b);

  cout << a << " " << b; 
  
}