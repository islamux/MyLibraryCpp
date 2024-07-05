#include <iostream>
using namespace std;

#pragma once

void PrintOneRowOF3Column(int arr[3][3], short rows, short cols)
{
    short sumR = 0;
         for (short i = 0; i < cols; i++)
        {
            // sumR+= arr[i][0];
            // cout << sumR << " ";
            cout <<  arr[i][0] << " ";  // سيطبع ثلاثة اعمدة في سطر واحد لان قيمة العمود تتغير وقيمة السطر ثابتة 
            // قيمة i هنا تحمل قيمة العمود  
        
        }
}
  