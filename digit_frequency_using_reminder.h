#include <iostream>
using namespace std;

int NumberFrequencyUsingReminder(int number, int numberToCheck, int typeOfRemindernumber_10_100){
  
  int reminder = 0;
  int frequency = 0;
  
  while (number > 0)
  {
    // reminder = last number ()
    reminder = number % typeOfRemindernumber_10_100;
    
    // numberFromFuncumber 
    number =  number / typeOfRemindernumber_10_100 ;

    // frequency
    if(numberToCheck == reminder){

      frequency++;
    }
  }
  return frequency;

}

