#include <iostream>
#include "Weather_Calendar.h"
using namespace std;

int main()
{
    Weather weather1(1, "Lviv", "Ukraine", 10, 81, 5, RAINY);
    Weather weather2(3, "Lutsk", "Ukraine", 12, 70, 13, SUNNY);
    Weather weather3(4, "Kyiv", "Ukraine", 15, 79, 6, RAINY);
    Weather weather4(2, "TERNOPIL", "UKRAINE", 16, 83, 5, CLOUDY);
    WeatherCalendar UKRAINE;
    UKRAINE.AddDayToCalendar(weather1);
    UKRAINE.AddDayToCalendar(weather2);
    UKRAINE.AddDayToCalendar(weather3);
    UKRAINE.AddDayToCalendar(weather4);
    UKRAINE.SortW();
    UKRAINE.Print();
    UKRAINE.FindMaxTemperature(3);;
}
