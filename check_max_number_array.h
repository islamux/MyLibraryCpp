#include <iostream>
using namespace std; 

//#include "read_number_positive_int.h"

int CheckMaxNumber(int numbersFromArray[100], int& lengthOfArr){

  // Variables 
  int max = 0;
  
  
  for(int i = 0; i < lengthOfArr; i++){
            if(max <= numbersFromArray[i]){
                max = numbersFromArray[i];

            }
        }

    return max;
  }


