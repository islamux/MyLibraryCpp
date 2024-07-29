#include <iostream>
using namespace std;

#pragma once 

bool IsNumberInMatrix(int matrix[3][3], short rows, short cols, short num)
{
        
    for (short i = 0; i  < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (matrix[i][j] == num)
            
                    return true;
        }  
    }
    return false;
}