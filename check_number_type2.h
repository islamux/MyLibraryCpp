#include <iostream>
using namespace std;


bool CheckNumberType(int checkedNumber){

        int Result = checkedNumber % 2;
        if(Result == 0 ){
           return 1;
        }else
            return 0;
}