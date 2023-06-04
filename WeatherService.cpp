#include "Weather.h"
#include "Service.h"
#include "JsonService.h"
#include <iostream>

int main()
{
	JsonService js;
	Weather w = js.getWeather("weather.json");
}

