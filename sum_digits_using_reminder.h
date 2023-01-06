#include <iostream>
using namespace std;

#include "read_number_positive_int.h"
int SumDigitsUsingReminder(int numberFromFunc, int typeOfReminderDigit_10_100){
  
  int reminder = 0;
  int sumDigits = 0;

  while (numberFromFunc > 0)
  {
    // reminder = last number ()
    reminder = numberFromFunc % typeOfReminderDigit_10_100;
    
    // numberFromFuncumber 
    numberFromFunc =  numberFromFunc / typeOfReminderDigit_10_100 ;
    
    // Reminder   
    //cout << reminder << "\n";

    // Sum 
    sumDigits += reminder;
  
  }

  return sumDigits;
}

