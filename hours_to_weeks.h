#include<iostream>
using namespace std;

float HoursToWeeks(int hours){

    int daysInWeek = 7;
    int hoursInDay = 24;

    return  (float) hours / (hoursInDay * daysInWeek);
}