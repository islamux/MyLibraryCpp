#include <iostream>
using namespace std;
#include <string.h>
#pragma once
string LowerFirstLetterOfEachWord(string text){

     bool isFirstLetter = true; 
     for (int i = 0; i <=text.length(); i++)
     {
        if (text[i] != ' ' && isFirstLetter )
        { 
             text = tolower(text[i]) ;
        }
        isFirstLetter = (text[i] == ' ' ? true : false);
    }
    return text;
}