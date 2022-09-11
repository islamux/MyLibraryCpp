#include <iostream>
#include <string.h>
#include "st_info.h"
using namespace std;

bool isAccepted(stInfo infoFromReadInfoFunction){
    return infoFromReadInfoFunction.age >21 && infoFromReadInfoFunction.hasDriverLicense; 
}