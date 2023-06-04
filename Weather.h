#pragma once
#include <string>
#include <iostream>
#include <clocale>
using namespace std;
class Weather
{
private:
	string city; //  Киров
	double lon; // 49.6601 долгота
	double lat; // 58.5966 широта
	double temperature; // 5.69
	string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100
public:
	Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds);
	void showWeather();
};

