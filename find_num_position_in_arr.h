#include <iostream>
using namespace std;
#include "read_number_positive_int.h"

int FindNumPostionInArr(int arr[100], int length, int numToCheck){

    for(int i = 0; i < length; i++)
        {
            if(numToCheck == arr[i])
                return i;
        }
        
    
    return -1;
}