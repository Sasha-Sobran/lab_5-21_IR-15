#include <iostream>
#include <vector>
#include <algorithm>
#include "Weather.h"

using namespace std;


class WeatherCalendar
{
private:
    vector<Weather> WC;
public:
    WeatherCalendar() {}

    WeatherCalendar(vector<Weather> v)
    {
        this->WC = v;
    }

    void findMaxTemperature(int day)
    {
        double maxTemp = INT_MIN;
        for (int i = 0; i < WC.size(); i++)
        {
            if (WC[i].getTemp() > maxTemp && WC[i].getDay() == day)
            {
                maxTemp = WC[i].getTemp();
            }
        }
        if (maxTemp == INT_MIN)
        {
            cout << "\nNot enough data" << endl;
        }
        else
            cout << "\nMax temp: " << maxTemp << endl;
    }

    void Add(Weather w)
    {
        WC.push_back(w);
    }

    void print()
    {
        for (int i = 0; i < WC.size(); i++)
            WC[i].print();
    }

    void sortW()
    {
        sort(WC.begin(), WC.end());
    }

    ~WeatherCalendar()
    {
        WC.clear();
        WC.shrink_to_fit();
    }
};
