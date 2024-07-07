#include <iostream>
using namespace std;

#pragma once

void PrintOneRowOF3ColumnUsing2DimArr(int arr[3][3], short rows, short cols)
{
    short sumR = 0;
         for (short i = 0; i < cols; i++)
        {
            // sumR+= arr[i][0];
            // cout << sumR << " ";
            cout <<  arr[0][i] << " ";
            // سطر واحد يعني قيمة السطر ثابتة  = صفر
            // ثلاثة اعمده يعني قيمة العمود تتغير = i

        }
}
  