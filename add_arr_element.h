#include <iostream>
using namespace std;

void AddArrElement(int element,int arr[100], int& arrLenghth){

        arrLenghth++;
        // arr[arrlength -1 ] => last element
        arr[arrLenghth - 1] = element;
        
}
