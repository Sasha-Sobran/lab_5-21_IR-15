#include <iostream>
#include "Weather_Calendar.h"
using namespace std;

int main()
{
    Weather w1(1, "Lviv", "Ukraine", 10, 81, 5, RAINY);
    Weather w2(3, "Lutsk", "Ukraine", 12, 70, 13, SUNNY);
    Weather w3(4, "Kyiv", "Ukraine", 15, 79, 6, RAINY);
    Weather w4(2, "TERNOPIL", "UKRAINE", 16, 83, 5, CLOUDY);
    WeatherCalendar UKRAINE;
    UKRAINE.AddDayToCalendar(w1);
    UKRAINE.AddDayToCalendar(w2);
    UKRAINE.AddDayToCalendar(w3);
    UKRAINE.AddDayToCalendar(w4);
    UKRAINE.SortW();
    UKRAINE.Print();
    UKRAINE.FindMaxTemperature(3);;
}
