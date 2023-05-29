#include <iostream>
using namespace std;


bool IsNumOdd(int checkedNumber){

   int result = checkedNumber % 2;
   if(result == 0){
      return false;
   }
   return true;
}