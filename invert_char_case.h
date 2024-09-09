#include <iostream>
#include <string>
using namespace std;


char InvertCharCase(char character){
  
    if (islower(character))
    {
          return   character =toupper(character);
    }else{
          return   character =tolower(character);
    }
    
}