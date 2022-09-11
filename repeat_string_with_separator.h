#include <iostream>
using namespace std;


void RepeatString(int numberOfRepetions, string textString, char seperarator){

    for(int i = 0; i <= numberOfRepetions; i++){
        cout << textString << seperarator;
    }
    cout << "\n";

}
