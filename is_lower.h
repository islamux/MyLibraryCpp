#include <iostream>
using namespace std;

bool IsLower(char character){
    return islower(character) && character != ' '?  true : false;
}