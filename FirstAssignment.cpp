#include <iostream>
#include <math.h>

using namespace std;

int main() {

   float principle, yearlyRate, compoundsPerYear, years, powerFunction, finalAmount;

   cout <<"Please enter the principle amount:\n"; 
   cin >> principle; 

   cout <<"Please enter the annual rate (as a decimal):\n"; 
   cin >> yearlyRate; 
   
   cout <<"Please enter the number of compounds per Year:\n"; 
   cin >> compoundsPerYear; 
   
   cout <<"Please enter the number of years the interest is in effect:\n"; 
   cin >> years;
   
   
   powerFunction = pow((1+(yearlyRate/compoundsPerYear)),(compoundsPerYear*years));
   
   finalAmount = principle*powerFunction;
   
   cout << "The Principle amount: $" << principle << endl;
   
   cout << "The annual Rate: " << yearlyRate << endl;

   cout << "The number of Compounds: " << compoundsPerYear << endl;

   cout << "The number of Years the interest is in effect: " << years << endl;

   cout << "The Total Amount Paid: $" << finalAmount << endl;
   

return 0;

}