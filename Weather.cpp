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
    cout << "�����:" << city << "\n";
    cout << "�������:" << lon << "\n";
    cout << "������:" << lat << "\n";
    cout << "�����������:" << temperature << "\n";
    cout << "������:" << weather << "\n";
    cout << "�������� �����:" << windSpeed << "\n";
    cout << "����������:" << clouds << "\n";
}
