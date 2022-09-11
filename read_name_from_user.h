#include <iostream>
#include <string>

using namespace std;


string ReadNameFromUser(string msgToUsr){

    string name;
    cout << msgToUsr << "\n";
    getline(cin, name);

    return name;
}