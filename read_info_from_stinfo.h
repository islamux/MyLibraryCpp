#include <iostream>
#include "../myLibraryCPP/is_accepted.h"
using namespace std;

stInfo ReadInfoFromStInfo(string msgToUsr){
    
    // Create ifo instance from stInfo struct in is_accepted.h

    stInfo info;
    cout << msgToUsr<< "\n";
    getline(cin, info.name);

    cout << msgToUsr << "\n"
    cin >> info.age;

    cout << msgToUsr<< "\n";
    cin >> info.hasDriverLicense;


    cout << msgToUsr<< "\n";
    cin >> info.hasRecomendation;
    
    return info; 
}