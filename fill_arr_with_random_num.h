#include <iostream>
using namespace std; 
#include "random_from_to.h"

void FillArrWithRandomNumFrom1To100( int numberFromArr[100], int& lengthOfArr){

    // Reading length of array 
    cout << "Ente a number of elements:\n";
    cin >> lengthOfArr;
  
    // Reading From Array using for loop
    for (int i = 0; i < lengthOfArr; i++)
    {
        numberFromArr[i] = RandomNUmberFromTo(1,100);
    }
 }