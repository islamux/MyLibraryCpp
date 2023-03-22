#include <iostream>
using namespace std; 


void ( int numberFromArr[100], int& lengthOfArr){

    // Reading length of array 
    cout << "Ente a number of elements:\n";
    cin >> lengthOfArr;
  
    // Reading From Array using for loop
    cout << "Enter array elements: \n";
    for (int i = 0; i < lengthOfArr; i++)
    {
        cout << "Element [" << i + 1 << "]: ";
        cin >> numberFromArr[i] ;
    }
 }