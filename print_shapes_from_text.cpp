#include <iostream>
#include <string>
using namespace std;


void PrintShapes(string text, char shape){
    int textLength = text.length();

    cout << "Number of your string is: " << textLength << endl;
    for(int i = 0; i <= textLength; i++){
        cout << shape;
    }
    cout << "\n";

}
