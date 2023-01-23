#include<iostream>
using namespace std;

void ConvertIntToChar(int numberFromFunc){

  for(int i = 65; i <= 122; i++){
    if(numberFromFunc == i)    
      cout << char(i) << "\n";
    else
      cout << "Number not in range between 65-122\n";
      break;
  }


} 

