#include <iostream>
using namespace std; 
#include "is_num_odd.h"
#include "add_arr_element.h"

void FillArrWithEvenNum( int arr[100], int arrLenght, int arrEven[100],  int& arrEvenLength)
{

  
    // Reading From Array using for loop
    for (int i = 0; i < arrLenght; i++)
    
    {
        if(!IsNumOdd(arr[i]))
        {

            AddArrElement(arr[i],arrEven, arrEvenLength);
            
        }
    }
 }