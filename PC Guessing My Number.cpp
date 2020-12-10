
//Below is code for the computer trying to find the user's number
//in x amount of tries. 

#include<iostream>
using namespace std;

//main function
int main() {
     
     string answer;
     bool proceed = true;
     int counter = 0;
     int low;
     int high;
     string correct = "TBD";
     int guess;
          
         
     cout << "Greetings...\n";
     cout << "My name is MEM-MORY and I would like to guess a number you choose.\n";
     cout << "Have you determined a range of numbers your number is in? (Y/N)\n";
     cin >> answer;    
         
         
     while(proceed) {
     
          //action based on "answer":
          if(answer == "Y") {
               cout << "GREAT! What is the lowest possible number?: ";
               cin >> low;
               cout <<"...and the highest possible number?: ";
               cin >> high;
               cout << "\nExcelent...then I will begin to guess your number....prepare yourself.\n";
               break; // gets out of the loop
          }
          else if(answer == "N") {
               
               cout << "\nWell then, think about it and get back to me when you do.\n";
               cout << "..............................................................\n";
               cout << "Do you have a range yet? (Y/N)\n";
               cin >> answer;
                              
               continue; //goes back to the top of the while loop
          }
          else {
               cout << "I am sorry, but I can't interpret that answer....good-bye.";
               return 0;
          }
     }   
     
     //guessing:
     while(correct != "C") {
         
         guess = low + ((high - low) / 2);
         cout << "I guess that your number is " << guess <<".\n";
         cout << "Is it High, Low, or Correct (H/L/C)?: ";
         cin >> correct;
         
         if(correct == "H") {
              high = guess;
         }
         else if(correct == "L") {
              low = guess;
         }
         else {
              cout << "LOOKS LIKE THE MACHINE IS SMARTER THAN THE HUMAN. ;P";
              break;
         }
         
         counter++;
         
         if(counter >= 3) {
              cout << "well.... it looks like humans are smarter than me after all...To Be Continued...";
              break;
         }
         
     }

     return 0;
}