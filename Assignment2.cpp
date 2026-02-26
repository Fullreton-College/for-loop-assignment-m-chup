#include <iostream>
using namespace std;

int main() {

   int integer1, integer2;
   cout << "Enter two integers." << endl;
   cin >> integer1;
   cin >> integer2;

   if (integer2 < integer1)
   {
    cout << "Second integer can't be less than the first." << endl;
    cout << "Please run the program again.";
   }
   else
   {
    for (; integer1 <= integer2; integer1 += 5)
    {
        cout << integer1 << " ";
    }
   }
   cout << endl;

   return 0;
}
