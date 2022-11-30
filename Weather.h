#include <iostream>

using namespace std;

enum type
{
    SUNNY = 1,
    CLOUDY,
    RAINY,
    FOGGY
};

class Weather
{
private:
    int day;
    string city;
    string country;
    double temp;
    double humidity_in_perc;
    double wind_speed;
    type t;
public:
    Weather()
    {
        day = 1;
        city = "Lviv";
        country = "Ukraine";
        temp = 23;
        humidity_in_perc = 80;
        wind_speed = 5;
        t = SUNNY;
    }

    Weather(int day, string city, string country, double temp, double humidity_in_perc, double wind_speed, type t)
    {
        this->day = day;
        this->city = city;
        this->country = country;
        this->temp = temp;
        this->humidity_in_perc = humidity_in_perc;
        this->wind_speed = wind_speed;
        this->t = t;
    }

    int getDay() { return day; }
    void setDay(int day) { this->day = day; }

    string getCity() { return city; }
    void setCity(string city) { this->city = city; }

    string getCountry() { return country; }
    void setCountry() { this->country = country; }

    double getTemp() { return temp; }
    void setTemp(double temp) { this->temp = temp; }

    double getHumidity() { return humidity_in_perc; }
    void setHumidity(double humidity) { this->humidity_in_perc = humidity; }

    double getWindSpeed() { return wind_speed; }
    void setWindSpeed() { this->wind_speed = wind_speed; }

    type getType() { return t; }
    void setType(type t) { this->t = t; }

    void isLvivWeather()
    {
        if ((humidity_in_perc > 80) && (t == RAINY))
            cout << "The typical day in Lviv\n";
        else
            cout << "You're lucky man\n";
    }

    void print()
    {
        cout << "\nDay: " << this->day << "\nCity: " << this->city << "\nCountry: " << this->country <<
            "\nTemperature: " << this->temp << "\nHumidity_in_perc: " << this->humidity_in_perc << "\nWind speed: " << this->wind_speed <<
            "\nType: " << this->t << endl;
        isLvivWeather();
    }

    friend bool operator > (const Weather& w1, const Weather& w2)
    {
        return w1.day > w2.day;
    }

    friend bool operator < (const Weather& w1, const Weather& w2)
    {
        return w1.day < w2.day;
    }

    ~Weather() {}
};
