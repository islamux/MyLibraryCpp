#include <iostream>

using namespace std;

#include "read_number_positive_int.h"

struct stTaskDuration
{
    int days;
    int hours;
    int minutes;
    float seconds;
};

stTaskDuration ReadStTaskDurationSt(){

    // Make instance from stTaskDuration class (struct)
    stTaskDuration duration;

    // Read
    // cout << "Enter number of days: \n";
    // cin >> duration.days;
    // Or by calling Read Func.
    duration.days =  ReadNumberPositiveInt("Enter a day number: ");

    // cout << "Enter number of hours: \n";
    // cin >> duration.hours;
    // Or by calling Read Func.
    duration.hours =  ReadNumberPositiveInt("Enter a number of hours: ");

    // cout << "Enter number of minutes: \n";
    // cin >> duration.minutes;
    // Or by calling Read Func.
   duration.minutes =  ReadNumberPositiveInt("Enter a number of minutes: ");

    // cout << "Enter number of seconds: " << endl;
    // cin >> duration.seconds;
    // Or by calling Read Func.
    duration.seconds = ReadNumberPositiveInt("Enter a number of seconds: ");

    return duration;
}
 