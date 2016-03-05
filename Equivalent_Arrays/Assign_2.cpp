#include <iostream>

using namespace std;

int j = 0;

bool equivalent (int a[], int b[], int n) {

  for ( j = 0; j < n; j++) {
  
        for (int i = 0; i < n; i++) {
            if (a[i] != b[(i + j)%n]) 
               goto next_shift;
        }
        return true;
        next_shift: ;
    }
    return false;
}

int main() {

   int a[] = {1, 2, 3, 4, 5};
   int b[] = {3, 4, 5, 1, 2};
   
   bool testResult;
   testResult = equivalent(a, b, 5);
   
   cout << "\nAre the arrays shift equivalent?\nAnswer: "; 
   
   if (testResult) {
      cout << boolalpha << testResult << endl;
      cout << "\nWe right shifted " << j << " places." << endl;
      }
      
   else
      cout << boolalpha << testResult << endl;
   
   return 0;
}