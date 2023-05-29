#include <iostream>
using namespace std; 
#include "is_num_odd.h"
#include "add_arr_element.h"

void FillArrWithOddNum( int arr[100], int arrLenght, int arrOdd[100],  int& arrOddLength)
{

  
    // Reading From Array using for loop
    for (int i = 0; i < arrLenght; i++)
    
    {
        if(IsNumOdd(arr[i]))
        {

            AddArrElement(arr[i],arrOdd, arrOddLength);
            
        }
    }
 }