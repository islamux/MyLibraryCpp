#include <iostream>
using namespace std;

int ReverseNumber(int numberFromFunc, int typeOfReminder){
  
  int reminder = 0;
  int number2 = 0; 

  while (numberFromFunc > 0)
  {
    // reminder = last number ()
    reminder = numberFromFunc % typeOfReminder;
    
    // numberFromFuncumber 
    numberFromFunc =  numberFromFunc / typeOfReminder ;
  
    // Rrint Remeinder 
    //cout <<  reminder << "\n"; 
    number2 = number2 * 10 + reminder;
  }
  return number2;
}

