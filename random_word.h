#include<iostream>
using namespace std;
#include "random_char.h"

string RandomWord(int lengthOfKey ){
  
  string randomWord = "";
  for(int i = 1; i <= lengthOfKey; i++){
    randomWord = randomWord + RandomChar(enCharType::CapitalLetter);
  }

  return randomWord;
}
