#include <iostream>
using namespace std;


struct stDurationConstants
{
    // Second
     int secondsInMinute = 60 ;
     int secondsInHour    = 60 * 60 ;
     int secondsInDay      = 60 * 60 * 24;                                   // seondsInDay
                                                            /*     daysToSeconds   =>(60*60*24) * numberOfDays
                                                                    numberOfDays   = daysToSecond / secondsInDay
                                                                                ?             =  193.535         /  60*60*24
                                                                    ---------------------------
                                                                    seconds 193.535 => 2:5:45:35
*/
     int secondsInWeek    = 60 * 60 * 24 * 7;
     int secondsInMonth   = 60 * 60 * 24 * 30 ;
     int secondsInYear       = 60 * 60 * 24 * 365;

    // Minute
    int minutesInHour;
    int minutesInDay;
    int minutesInWeek;
    int minutesInMonth;
    int minutesInYear;
    
    // Hours
    int hoursInDay;
    int hoursInWeek;
    int hoursInMonth;
    int hoursInYear;

    // Days
   int daysInWeek; 
   int daysInMonth; 
   int daysInYear; 

    // Weeks
    int weeksInMonth;
    int weeksInYear;

    // Months
    int monthsInYear;

    //Year
};
