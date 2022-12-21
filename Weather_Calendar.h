#include <iostream>
#include <vector>
#include <algorithm>
#include "Weather.h"

using namespace std;

class WeatherCalendar {
private:
    vector<Weather> Weather_Calendar;
public:
    WeatherCalendar() {}

    WeatherCalendar(vector<Weather> weather)
    {
        this->Weather_Calendar = weather;
    }

    void FindMaxTemperature(int day)
    {
        double maxTemp = INT_MIN;
        for (int i = 0; i < Weather_Calendar.size(); i++)
        {
            if (Weather_Calendar[i].getTemp() > maxTemp && Weather_Calendar[i].getDay() == day)
            {
                maxTemp = Weather_Calendar[i].getTemp();
            }
        }
        if (maxTemp == INT_MIN)
        {
            cout << "\nNot enough data" << endl;
        }
        else
            cout << "\nMax temp: " << maxTemp << endl;
    }

    void AddDayToCalendar(Weather w)
    {
        Weather_Calendar.push_back(w);
    }

    void Print()
    {
        for (int i = 0; i < Weather_Calendar.size(); i++)
            Weather_Calendar[i].print();
    }

    void SortW()
    {
        sort(Weather_Calendar.begin(), Weather_Calendar.end());
    }

    ~WeatherCalendar()
    {
        Weather_Calendar.clear();
        Weather_Calendar.shrink_to_fit();
    }
};
