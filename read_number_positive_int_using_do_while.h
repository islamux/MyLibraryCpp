#include <iostream>
using namespace std; 

int ReadNumberPositiveIntUsingDoWhile(string msgToUser){

    int number = 0;
    do
    {
        cout << msgToUser << "\n";
        cin >> number;
    }while(number < 1); 
    
    return number;
}
