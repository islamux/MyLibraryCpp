#include <iostream>
using namespace std;

void PatternNumber(int numberFromReadFunc){

  int i = 0 ;
  int j = 0 ;
  
  for(i = 1; i <= numberFromReadFunc; i++ ){
    for(j = 1; j <= i; j++){
      cout  << i ; 
    
    }
    cout << "\n";
  }

}

