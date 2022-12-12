#include <iostream>
using namespace std;

int ReadNumberPositiveUsingWhile(string msgToUsr){

  int number = 0 ;
 while(number < 1){
  cout << msgToUsr << "\n";
  cin >> number;
 }

  return number;
}
