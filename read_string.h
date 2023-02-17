#include <iostream>
using namespace std;

 string ReadString(string msgToUsr){

    string txt;
    cout << msgToUsr ;
    getline(cin , txt);

    return txt;
}


