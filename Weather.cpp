#include "Weather.h"

Weather::Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds)
{
    this->city = city;
    this->lon = lon;
    this->lat = lat;
    this->temperature = temperature;
    this->weather = weather;
    this->windSpeed = windSpeed;
    this->clouds = clouds;
}

void Weather::showWeather()
{
    setlocale(LC_ALL, "Russian");
    cout << "Город:" << city << "\n";
    cout << "Долгота:" << lon << "\n";
    cout << "Широта:" << lat << "\n";
    cout << "Температура:" << temperature << "\n";
    cout << "Погода:" << weather << "\n";
    cout << "Скорость ветра:" << windSpeed << "\n";
    cout << "Облачность:" << clouds << "\n";
}
