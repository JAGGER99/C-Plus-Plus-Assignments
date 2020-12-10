//Joshua Greene
//Assignment #4
//Computer Science I


#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

//prototype statements
float courseAvg(float, float, float);
char letterGrade(float);


int main() {

//variables
string firstName, lastName;
float score1, score2, score3;
float weightedAvg;
char letter;

//describing the program to the user
cout << "This program will find the weighted average score of a student and associate a letter grade to it.\n";
cout << "To end this program, please enter 0 for each of your scores.\n\n";

int n=1;
while(n=1) {

//prompt for scores
cout << "What is score#1?\n";
cin >> score1;

cout << "What is score#2?\n";
cin >> score2;

cout << "What is score#3?\n";
cin >> score3;

//code to quit the program

if( score1 == 0) {
      if( score2 == 0) {
         if( score3 == 0) {
         
         cout<< "You have successfully quit the program\n";
         return 0;
         
         }
      }
  }

//getting the user's name

cout<< "What is the student's first name?\n";
cin >> firstName;

cout << "What is the student's last name?\n";
cin >> lastName;

//referencing function#1

weightedAvg = courseAvg(score1,score2,score3);


//referenceing function#2

letter = letterGrade(weightedAvg);


//output

cout<< endl << endl << lastName << ", " << firstName << " " <<  fixed << setprecision(2) << weightedAvg << " " << letter << endl << endl << endl;


   }
  return 0;
  }

//function for course average

float courseAvg(float score1, float score2, float score3) {

float weightedAvg = (0.3)*score1 + (0.3)*score2 + (0.4)*score3;

return weightedAvg;

 }


//function for letter grade

char letterGrade(float weightedAvg) {
char letter;

if( weightedAvg >= 90) {
      
      letter = 'A';
   
   }
   
   else if(weightedAvg >= 80) {
      
      letter = 'B';
   
   }
   
   else if(weightedAvg >= 70) {
   
      letter = 'C';
   }
   
   else {
      
     letter = 'F';
   
   }

return letter;

}