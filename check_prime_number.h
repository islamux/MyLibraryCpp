#include <iostream>
using namespace std; 

enum enCheckPrimeOrNotPrime{Prime=1, NotPrime=2};

 enCheckPrimeOrNotPrime CheckPrimeNumber (int numFromReadingFunc){

    int counter = 0;
    int number = round(numFromReadingFunc / 2);

    for (counter = 2; counter <= number; counter++)
    {
        if (number % counter == 0)
                return enCheckPrimeOrNotPrime::NotPrime;
    }

     return enCheckPrimeOrNotPrime::Prime;
}