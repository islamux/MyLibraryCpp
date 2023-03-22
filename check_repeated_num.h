#include <iostream>
using namespace std;

void CheckNumber(int numberFromArr[10], int lengthOfArr, int numberFromRaeadFunc){

    int repeatedTimes = 0;
    int i = 0;
    for( i = 0; i <lengthOfArr; i++){
        if(numberFromRaeadFunc == numberFromArr[i]){
            repeatedTimes++;
        }
        
        }

        cout << numberFromRaeadFunc << " is repeated " << repeatedTimes << " times"<< "\n";
}