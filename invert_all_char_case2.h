#include <iostream>
#include <string>
#include "invert_char_case2.h"
using namespace std;


void InvertAllCharCase2(string text){
  
  for (int i = 0; i < text.length(); i++)
  {
   text[i] =  InvertCharCase2(text[i]);

  }
      cout << text;
    
}