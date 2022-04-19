#include <iostream>
#include <string>
using namespace std;

int main() {
  string Variable = "Carrot";
  string* p_Variable = &Variable;

  // Output the value 
  cout << Variable << "\n";

  // Output the memory address 
  cout << &Variable << "\n";

  // Access the memory address and output its value
  cout << *p_Variable << "\n";
  
  // Change the value of the pointer
  *p_Variable = "Apple";
  
  // Output the new value of the pointer
  cout << *p_Variable << "\n";
  
  // Output the new value of variable
  cout << Variable << "\n";
  return 0;
}
