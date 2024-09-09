#include <iostream>
#include <string>
using namespace std;


char InvertCharCase2(char character){
  
return   islower(character) ? toupper(character) : tolower(character);

}