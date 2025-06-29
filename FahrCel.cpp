#include <iostream>
using namespace std;

int main()

{
  
  double tempf;
  double tempc;
  
  // user input
  cout << "Enter the temperature in Fahrenheit: ";
  cin >> tempf;
  
  
  tempc = (tempf - 32) / 1.8;
  
  cout << "The temperature is " << tempc << " degrees Celsius.\n";
  
  return 0;

}