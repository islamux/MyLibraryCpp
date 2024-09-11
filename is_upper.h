#include <iostream>
using namespace std;

bool IsUpper(char character){
    return isupper(character) && character != ' '?  true : false;
}