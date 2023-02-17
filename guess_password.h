#include <iostream>
using namespace std;

bool GuessPassword(string guess){
  
  int trail = 0; // just to know the number of cicles 
  bool key = false;               
  string password = "";

  for(int i = 65; i <= 70; i++ ){
    for(int j = 65; j <= 70; j++){
      for(int k = 65; k <= 70; k++){
           trail++; 
          password = password + char(i);
          password = password + char(j);
          password = password + char(k);
           if(password == guess){
                cout << "password Found on Trail [" << trail << "]" <<"\n";
                return true;
           }else
            cout << "Trail ["<<trail<< "]" <<password ;
            cout << endl;
           password = "";
      }       
           cout << "\n"; 
      
    }
    }
  

 return true; 
}

