//Joshua Greene
//Assignment #2



#include <iostream>

using namespace std;

int main() {

//variables

string firstName, lastName, statusName, majorName;
int status;
char major;

// Getting input from user

 cout << "Please enter your first name\n";
 cin >> firstName;
 
 cout << "Please enter your last name\n";
 cin >> lastName;

 cout << "Please enter your major (M = math, C = computer science, E = engineering)\n";
 cin >> major;
 
 // Determining major
 
 if(major == 'M') {
 
      majorName = "Mathematician";
 
 }
 
 else if(major == 'C') {
 
      majorName = "Computer Science";
 
 }
 
 else if(major == 'E') {
 
      majorName = "Engineer";
 
 }

 else {
 
 cout << "You have typed an incorrect input.This program is now terminated. Please restart the program.";
 
 return 0;
 
 }

//Getting input from the user

 cout << "Please enter your current year in college (where 1 = freshman, 2 = sophomore, 3 = junior, 4 = senior)\n";
 cin >> status;
 


// Determining what year

if(status == 1) {

      statusName = "Freshman";

}

else if(status == 2) {

      statusName = "Sophomore";

}

else if(status == 3) {

      statusName = "Junior";

}

else if(status == 4) {

      statusName = "Senior";

}

else {

      cout << "You have typed an incorrect input.This program is now terminated. Please restart the program.";
 
 return 0;

}

// Desired output statement
 
cout << firstName[0] << lastName[0] << " is a " << statusName << " " << majorName << " Major." << endl;

return 0;

}