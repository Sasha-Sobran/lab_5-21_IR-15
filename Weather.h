#include <iostream>

using namespace std;

enum type
{
    SUNNY = 1,
    CLOUDY,
    RAINY,
    FOGGY
};

class Weather {
private:
    int day_;
    string city_;
    string country_;
    double temp_;
    double humidity_in_perc_;
    double wind_speed_;
    type t;
public:
    Weather()
    {
        day_ = 1;
        city_ = "Lviv";
        country_ = "Ukraine";
        temp_ = 23;
        humidity_in_perc_ = 80;
        wind_speed_ = 5;
        t = SUNNY;
    }

    Weather(int day, string city, string country,
        double temp, double humidity_in_perc,
        double wind_speed, type t)
    {
        this->day_ = day;
        this->city_ = city;
        this->country_ = country;
        this->temp_ = temp;
        this->humidity_in_perc_ = humidity_in_perc;
        this->wind_speed_ = wind_speed;
        this->t = t;
    }

    int getDay() { return day_; }
    void setDay(int day) { this->day_ = day; }

    string getCity() { return city_; }
    void setCity(string city) { this->city_ = city; }

    string getCountry() { return country_; }
    void setCountry() { this->country_ = country_; }

    double getTemp() { return temp_; }
    void setTemp(double temp) { this->temp_ = temp; }

    double getHumidity() { return humidity_in_perc_; }
    void setHumidity(double humidity) { this->humidity_in_perc_ = humidity; }

    double getWindSpeed() { return wind_speed_; }
    void setWindSpeed() { this->wind_speed_ = wind_speed_; }

    type getType() { return t; }
    void setType(type t) { this->t = t; }

    void IsLvivWeather()
    {
        if ((humidity_in_perc_ > 80) && (t == RAINY))
            cout << "The typical day in Lviv\n";
        else
            cout << "You're lucky man\n";
    }

    void print()
    {
        cout << "\nDay: " << this->day_ << "\nCity: " << this->city_ << "\nCountry: " << this->country_ <<
            "\nTemperature: " << this->temp_ << "\nHumidity_in_perc: " << this->humidity_in_perc_ << "\nWind speed: " << this->wind_speed_ <<
            "\nType: " << this->t << endl;
        IsLvivWeather();
    }

    friend bool operator > (const Weather& w1, const Weather& w2)
    {
        return w1.day_ > w2.day_;
    }

    friend bool operator < (const Weather& w1, const Weather& w2)
    {
        return w1.day_ < w2.day_;
    }

    ~Weather() {}
};
