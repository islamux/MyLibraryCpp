#include <iostream>
using namespace std;

string ConvertNumberToLetterA1(int numberFromReadFunc){

  string letter ;
  for(int i = 65 + numberFromReadFunc; i <= 65 + numberFromReadFunc; i++ ){
    for(int j = 65 + numberFromReadFunc; j <= 65 + numberFromReadFunc; j++){
      cout  << char( i - 1 ) ; 
    
    }
    //cout << "\n";
  }
  return letter;  
}



