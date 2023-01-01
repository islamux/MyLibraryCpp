#include <iostream>
using namespace std;

void PrintSumDigits(int numberFromFunc, int typeOfReminderDigit_10_100){
  
  int reminder = 0;
  int sumDigits = 0;

  while (numberFromFunc > 0)
  {
    // reminder = last number ()
    reminder = numberFromFunc % typeOfReminderDigit_10_100;
    
    // numberFromFuncumber 
    numberFromFunc =  numberFromFunc / typeOfReminderDigit_10_100 ;
    
    // Reminder to print the enterd numbers  
    cout << reminder << "\n";

    // Sum 
    sumDigits += reminder;
  
  }

  cout << "Final Sum = " << sumDigits << "\n";

}

