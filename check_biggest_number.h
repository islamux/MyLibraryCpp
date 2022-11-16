#include <iostream>
using namespace std; 

//#include "read_number_positive_int.h"

int CheckBiggestNumber(int numbersFromArray[5], int& lengthOfArr){

  // Variables 
  int biggest = 0;
  int i = 0;
  
  for(i = 0; i < lengthOfArr; i++){
   //ReadNumberPositiveInt(); 
    if(numbersFromArray[0] > numbersFromArray[1] && numbersFromArray[0] > numbersFromArray[2]){
    cout << "Number: " << numbersFromArray[0] << " "<<" is the biggest" << "\n";
    biggest = numbersFromArray[0]; 
        
    }else if(numbersFromArray[1] > numbersFromArray[0] && numbersFromArray[1] > numbersFromArray[2]){
    cout << "Number: " << numbersFromArray[1] << " " << " is the biggest one\n";
    biggest = numbersFromArray[1]; 
  
    }else 
    cout << "Number: " << numbersFromArray[2] << " "<< "is the biggest" << "\n";
    biggest = numbersFromArray[2]; 
 
  }

    return biggest;
}
