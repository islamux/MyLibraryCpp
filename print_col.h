#include <iostream>
using namespace std;

#pragma once

void PrinOneColumnFrom3Rows(int arr[3][3], short rows, short cols)
{
    short sumR = 0;
         for (short i = 0; i < rows; i++)
        {
            // sumR+= arr[i][0];
            // cout << sumR  << " ";
            cout << arr[i][0] << "\n";  // سيطبع ثلاثة اسطر في عمود واحد لان قيمة السطر تتغير وقيمة العمود ثايتة
            
        }
}
  