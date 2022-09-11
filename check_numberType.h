#include <iostream>
#include <string>
using namespace std;

enum enCheckNumberType{odd=1, even=2};

enCheckNumberType CheckNumberType(int checkedNumber){

        int Result = checkedNumber % 2;
        if(Result == 0 ){
           return enCheckNumberType::even;
        }else
            return enCheckNumberType::odd;
}