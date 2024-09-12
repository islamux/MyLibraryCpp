#include <iostream>
using namespace std;
#include "is_upper.h"
short CountCapitalLetters(string text){

short capitalCounter = 0;
for (short i = 0; i < text.length(); i++)
{
    if (IsUpper(text[i]))
    {
        capitalCounter+=1;
    }
}
    return capitalCounter;

}