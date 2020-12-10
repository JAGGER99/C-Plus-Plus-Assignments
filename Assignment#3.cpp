
//Assignment #3
//Josh Greene
//C++


#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

 // prototype statements

  int menu();

  float compoundInterest(float, float, float, float, float, float);
  
  float loanPayment(float, float, float, float, float);
  
  float remainingLoanBalance(float, float, float, float, float, float);
  
  float interestMinusPrinciple(float, float, float, float, float);
  
// main function
int main() {

   string firstName, lastName;
   
   cout << "what is your first name?\n";
   cin >> firstName;
   
   cout << "what is your last name?\n";
   cin >> lastName;

   float principle, yearlyRate, compoundsPerYear, years, powerFunction, finalAmount, compoundInterestAnswer, loanPaymentAnswer;
   int menuAnswer;
   

   menuAnswer = menu();
   
   
   if(menuAnswer == 1) {
   
   cout << "You have chosen to calculate regular compound interest.\n";
   
   compoundInterestAnswer = compoundInterest (principle, yearlyRate, compoundsPerYear, years, finalAmount, powerFunction);
 
   cout << "...................................................................\n";
   cout << firstName << " " << lastName << " ,your Total Amount Paid is: $" << fixed << setprecision(2) << compoundInterestAnswer << endl;
   
   }
  
  float payment, presentValue, ratePerPeriod, numberOfPeriods, powerFunction2;
  
   if(menuAnswer == 2) {
   
   cout << "You have chosen to calculate loan payment.\n";
   
   loanPaymentAnswer = loanPayment(payment, presentValue, ratePerPeriod, numberOfPeriods, powerFunction2); 
   cout << "...................................................................\n";
   cout << firstName << " " << lastName << " ,your Total Loan Payment is: $" << fixed << setprecision(2) << loanPaymentAnswer <<endl;
   
   }
   
   float remainingBalanceOnLoan, futureValue, Payment, ratePerPayment, numberOfPayments, powerFunction3;
  
   if(menuAnswer == 3) {
   
   cout << "You have chosen to calculate the remaining loan balance.\n";
   
   remainingBalanceOnLoan = remainingLoanBalance(futureValue, presentValue, Payment, ratePerPayment, numberOfPayments, powerFunction3);
   cout << "...................................................................\n";
   cout << firstName << " " << lastName << " ,your Remaining Balance on your Loan is: $" << fixed << setprecision(2) << remainingBalanceOnLoan << endl;
   
   }
   
   float compoundInterest, principal, powerFunction4;
   
   if(menuAnswer == 4) {
   
   cout << "YJoshou have chosen to calculate compound interest minus the principal.\n";
 
   compoundInterestAnswer = interestMinusPrinciple(compoundInterest, principal, ratePerPeriod, numberOfPeriods, powerFunction4);
   cout << "...................................................................\n";
   cout << firstName << " " << lastName << " ,your compound interest minus the principal is: $" << fixed << setprecision(2) << compoundInterestAnswer << endl;
   
   }
   

 return 0;

}


//menu function

int menu() {
   
     int answer;
      
     cout << "if you want to calculate compound interest then press 1\n";
     cout << "if you want to caclualte loan payment then press 2\n";
     cout << "if you want to calculate loan remaining balance press 3\n";
     cout << "if you want to calculate compound interest without principle then press 4\n";
     
     cin >> answer;

     return answer;
}

//compound interest function

float compoundInterest(float principle, float yearlyRate, float compoundsPerYear, float years, float powerFunction1, float finalAmount) {
 
   cout <<"Please enter the principle amount:\n"; 
   cin >> principle; 

   cout <<"Please enter the annual rate (as a decimal):\n"; 
   cin >> yearlyRate; 
   
   cout <<"Please enter the number of compounds per Year:\n"; 
   cin >> compoundsPerYear; 
   
   cout <<"Please enter the number of years the interest is in effect:\n"; 
   cin >> years;
   
   
   powerFunction1 = pow((1+(yearlyRate/compoundsPerYear)),(compoundsPerYear*years));
   
   finalAmount = principle*powerFunction1;
   
   cout << "The Principle amount: $" << principle << endl;
   
   cout << "The annual Rate: " << yearlyRate << endl;

   cout << "The number of Compounds: " << compoundsPerYear << endl;

   cout << "The number of Years the interest is in effect: " << years << endl;
   
   return finalAmount;
}

//loan payment function

float loanPayment(float payment, float presentValue, float ratePerPeriod, float numberOfPeriods, float powerFunction2) {

   cout <<"Please enter the present value:\n"; 
   cin >> presentValue; 
   
   cout <<"Please enter the rate per period:\n"; 
   cin >> ratePerPeriod; 
   
   cout <<"Please enter the number of periods:\n"; 
   cin >> numberOfPeriods;
   
   
   powerFunction2 = pow(1+ratePerPeriod, (-1)*(numberOfPeriods));
   
   payment = (ratePerPeriod*presentValue)/(1-powerFunction2);
   
   cout << "The present value: " << presentValue << endl;

   cout << "The rate per period: " << ratePerPeriod << endl;

   cout << "The number of periods: " << numberOfPeriods << endl;
   
   return payment;
}

// loan remaining balance function

float remainingLoanBalance(float futureValue, float presentValue, float Payment, float ratePerPayment, float numberOfPayments, float powerFunction3) {

   cout <<"Please enter the present value:\n"; 
   cin >> presentValue; 
   
   cout <<"Please enter the payment:\n"; 
   cin >> Payment; 
   
   cout <<"Please enter the rate per payment:\n"; 
   cin >> ratePerPayment;
   
   cout <<"Please enter the number of payments:\n";
   cin >> numberOfPayments;


   powerFunction3 = pow(1 + ratePerPayment,numberOfPayments);

   futureValue = (presentValue*powerFunction3) + ((-1)*Payment*((powerFunction3 - 1)/ratePerPayment));


   cout << "The present value: " << presentValue << endl;

   cout << "The payment: " << Payment << endl;

   cout << "The rate per payment: " << ratePerPayment << endl;
   
   cout << "The number of payments: " << numberOfPayments << endl;
   
   return futureValue;

}


//compound interest without the principle

float interestMinusPrinciple(float compoundInterest, float principal, float ratePerPeriod, float numberOfPeriods, float powerFunction4) {


   cout <<"Please enter the principal:\n"; 
   cin >> principal; 
   
   cout <<"Please enter the rate per period:\n"; 
   cin >> ratePerPeriod; 
   
   cout <<"Please enter the number of periods:\n"; 
   cin >> numberOfPeriods;
   

   powerFunction4 = pow(1 + ratePerPeriod,numberOfPeriods);

   compoundInterest = (powerFunction4 - 1)*principal;


   cout << "The principal: " << principal << endl;

   cout << "The rate per period: " << ratePerPeriod << endl;

   cout << "The number of periods: " << numberOfPeriods << endl;
   
   return compoundInterest;

}

