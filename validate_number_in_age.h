#include <iostream>
using namespace std;

bool ValidateNumberInRange(int ageNumberFromReadFunc, int from, int to){

        return (ageNumberFromReadFunc > from && ageNumberFromReadFunc < to);
}