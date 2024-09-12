#include <iostream>
using namespace std;
#include "is_lower.h"
short CountSmallLetters(string text){

short smallLetters = 0;
for (short i = 0; i < text.length(); i++)
{
    if (islower(text[i]))
    {
        smallLetters+=1;
    }
}
    return smallLetters;

}