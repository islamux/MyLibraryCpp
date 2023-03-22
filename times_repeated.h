#include <iostream>
using namespace std;

int TimesRepeated(int numberFromArr[100], int lengthOfArr, int numToCheckFromReadFunc){
    
    int repeatedTimes = 0;
    for(int i = 0; i < lengthOfArr; i++){
        if(numToCheckFromReadFunc == numberFromArr[i]){
            repeatedTimes++;
        }
    }

    return repeatedTimes;
}