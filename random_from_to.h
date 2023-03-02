#include <iostream>
using namespace std;
#include <cstdlib>

int RandomNUmberFromTo(int from, int to){

  // use a builtin func  
  int random = rand() % (to - from + 1) + from;

  
    return random;
  }
