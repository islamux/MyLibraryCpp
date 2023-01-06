#include <iostream>
using namespace std;

int  ReadNumberBetween(string msgToUsr, int from, int to){

    int number = 0;
    do
    {
        cout << msgToUsr;
        cin >> number;
    } while (number < from || number > to);
    
    return number;

}
