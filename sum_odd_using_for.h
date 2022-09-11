#include <iostream>
using namespace std;

int SumOddUsingFor(int numFromFuncOr){

        int SumOdd = 0;

        for (int counter = 1; counter <= numFromFuncOr; counter ++)
        {
           if(CheckOddEven(numFromFuncOr) == enOddEven::Odd)
                SumOdd += counter;
        }
    return SumOdd;  
}