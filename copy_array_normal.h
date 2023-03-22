#include <iostream>
using namespace std;
#include "check_prime_number.h"
void CopyArray(int sourcArr[100],int lengthOfArr,int destArr[100], int& lengthArr2){

    int counter = 0;
    for(int i = 0; i < lengthOfArr; i++){
      
      if(enCheckPrimeOrNotPrime(i)== enCheckPrimeOrNotPrime::Prime)  
         {
          destArr[counter] = sourcArr[i];
          counter++; 
         

    
        
    }
    lengthArr2 = counter;
}
