#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int i, a, b, value;
  bool result;

  cout << "\nTable of Perfect Squares: \n" << endl;
  cout << "Number  Square  Value    Last_two_digits_odd?" << endl;

  for (i = 1; i <= 50; i++) {

    value = i*i;
    
    a = (value/10)%10;    // second last digit
    b =  value%10;        // last digit
    
    if (a%2 == 1 && b%2 == 1) {
       result = true;
    }
    else
       result = false;
       
    cout << setw(3) << i 
         << "     "        << setw(2) << i << " *" << setw(2) << i 
         << "   "          << setw(4) << value
         << "           "  << boolalpha << result
         << endl;
    
    // print out the title after every 25 entries  
    if( i != 50 && i%25 == 0) {
       cout << "\nNumber  Square  Value    Last_two_digits_odd?" << endl;
    }
    
    // print if the desired perfect square is found
    if (result == true) {
       cout << "The perfect square with last two digits odd is: "<< value << endl;
    }
       
  }

  return 0;
}