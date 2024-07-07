#include <iostream>
using namespace std;

#pragma once

void PrinOneColFrom3RowsUsing2DimArr(int arr[3][3], short rows, short cols)
{
    short sumR = 0;
         for (short i = 0; i < rows; i++)
        {
            // sumR+= arr[i][0];
            // cout << sumR  << " ";
            cout << arr[i][0] << "\n"; 
            // قيمة العمود ثابتة يعني = صفر
            // قيمة السطر متغير يعني = i
            
        }
}
  