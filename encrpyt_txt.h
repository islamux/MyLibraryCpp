#include <iostream>
using namespace std;

#include "length_string.h"

string EncryptTxt(string txt, short encrptionKey){
  
  int i = 0;
  for(i = 0; i <= LengthString(txt)-1 ; i++){
     txt[i] = char(txt[i] + encrptionKey);;
  }
  return txt;
}
