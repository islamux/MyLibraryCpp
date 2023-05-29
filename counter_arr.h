#include <iostream>
using namespace std;

int CounterArr(int arr[100],int lengthOfArr){

    int counter = 0;
    for(int i = 0; i < lengthOfArr; i++){
         counter++; 
    }

    return counter;    
}