#include <iostream>
using namespace std;

float CalculateHoursInWeek(int numberOfWeeks ){
    
     int hoursInDay = 24;
     int daysInWeek = 7;
    return hoursInDay * daysInWeek * numberOfWeeks;
}