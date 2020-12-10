#include <iostream>
#include <fstream>
 
 using namespace std;

 
 //prototype statement

 int calculateFine(int);
 
 
 int main() {
 
    ifstream inputInfo;
    ofstream outputInfo;
    
    inputInfo.open("Trucks.txt");
    outputInfo.open("TruckFines.txt");
    
    
    int trucks; // truck number
    int days; // weekday number
    
    inputInfo >> trucks;   // storing # of trucks information from file
    inputInfo >> days;   //storing # of days information from file
   
    int weights[trucks][days]; // array for the weights 
    string weekDay[days]; //  array for the day of the week you're on
        
    while(!inputInfo.eof())  {
   
         //loop through and fill weekDay with names if days
         for(int k = 0; k < days; k++) {
            inputInfo >> weekDay[k];
         }
         
         //loop through the weights
         for(int i = 0; i < trucks; i++) {
       
            for(int j = 0; j < days; j++) {
          
            inputInfo >> weights[i][j];
          
          }
       
       }
   }
     
    // end of file reached
        
    // for loops for output statements in the new file    
    for(int d = 0; d < days; d++) {
            
         outputInfo << endl << "For " << weekDay[d] << endl << endl; 
         outputInfo << "Trucks without fines are: " << endl;
         
         for(int t = 0; t < trucks; t++){
         
             if(weights[t][d] <= 80000) {
               
               outputInfo << "Truck" << t+1 << endl;
            }
         }
         outputInfo << endl << "Trucks with fines are: " << endl;
         for(int t = 0; t < trucks; t++) {
            
            if(weights[t][d] > 80000) {
            
            //calling the function for the fine of a specific weight
            int FINE = calculateFine(weights[t][d]);
            outputInfo << "Truck" << t+1 << " $" << FINE << endl;
            
             }
         }
     }          

    //output to the user telling them the program is finished
    cout << "Processing is completed and output was written to the file TruckFines.txt.\n";
    
    //closing the files
    inputInfo.close();
    outputInfo.close();
    return 0;
    
}
    
// function that calculates truck fines
    
int calculateFine(int weights) {
    
    int fine;  
    
      fine = (1+((weights - 80001)/100))*50;
    
    return fine;
 }
