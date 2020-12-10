#include<iostream>
using namespace std;

int main() {

     string play;
     int guess;
     int myNum = 6;
     int numGuess = 3;
     
     cout << "Hello there, would you like to play game? (Y/N)"; 
     cin >> play;
     
     if(play == "Y") {
          
          cout << "Awesome! I am thinking of a number from 1 to 10. \n";
     }
     else { 
          
          cout << "Sorry to here that.";  
          return 0;
     }
     
     
     while(numGuess != 0) {
          
          cout << "What is your guess?: ";
          cin >> guess;
          
          
          if(guess > myNum) {
               
               cout << "Your guess was too high...please try again.\n";
          }
          
          else if(guess < myNum) {
               
               cout << "Your guess was too low... please try again.\n";
          }
          
          else {
               cout << "GREAT JOB YOU FOUND MY NUMBER!";
               return 0;
          }
          
          numGuess--;
          
          cout <<  "number of guesses remaining: " << numGuess << "\n";
     }
     
     cout << "Looks like you ran out of tries...good-bye!";

     return 0;
}