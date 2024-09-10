#include <iostream>
#include <string>
using namespace std;


void InvertAllCharCase(string text){
  
  for (int i = 0; i < text.length(); i++)
  {
      if (islower(text[i]))
    {
             text[i] =toupper(text[i]);
    }else{
             text[i] =tolower(text[i]);
    }

  }
      cout << text;
    
}