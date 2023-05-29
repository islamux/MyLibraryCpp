#include <iostream>
using namespace std;

int SumtArr(int arr[100],int lengthOfArr){

    int sum = 0;
    for(int i = 0; i < lengthOfArr; i++){
         sum += arr[i]; 
    }

    return sum;    
}