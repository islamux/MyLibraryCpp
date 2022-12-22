#include <iostream>
using namespace std;

bool IsPerfectNumber(int numberFromReadFunc){
  
  // Variables 
  int sumDivisiors = 0;
  for(int i = 1; i < numberFromReadFunc; i++){
    if(numberFromReadFunc % i == 0){
      sumDivisiors+=i;
    }
      }
  // My solution to check
//  if(numberFromReadFunc == sumDivisiors){
//      return true;
//  }else
//      return false;
//
  // AbuHadhud Solution
  return numberFromReadFunc == sumDivisiors;
}
