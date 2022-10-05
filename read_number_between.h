#include <iostream>
using namespace std;

int  ReadNumberBetween(string msgToUsr){

    int number = 0;
    do
    {
        cout << msgToUsr;
        cin >> number;
    } while (number < 1 || number >4);
    
    return number;

}