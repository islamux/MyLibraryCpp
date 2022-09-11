#include <iostream>
using namespace std;

// check number if it s out of range still in loop.
int ReadNumberInRangeFromTo(int from, int to){

    int numberToCheckFromFuncOr = 0;

    do
    {

      // You could using read input directly 
    //   cout << "Enter a number: \n"; 
    //   cin >> numberToCheckFromFuncOr;

    // Or You could call ReadNumber() func
      numberToCheckFromFuncOr = ReadNumber();

      

    } while ( numberToCheckFromFuncOr < from || numberToCheckFromFuncOr > to);
    
      
  return numberToCheckFromFuncOr;
}