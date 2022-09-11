#include <iostream>
#include <string>
using namespace std;

int ReadAge(string msgToUsr){
    
    int age;
    cout << msgToUsr << "\n";
    cin >> age;

    return age;
}