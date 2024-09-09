#include <iostream>
using namespace std;
#include <string.h>
#pragma once
string UpperAllLetters(string text){

     
     for (int i = 0; i <=text.length(); i++)
     {
        text[i] = toupper(text[i]);
     }
     return text;
     }