#include <iostream>
#include <string>

// Function to get weather information
std::string getWeatherInfo(const std::string &city)
{
    // Replace this with your API call to fetch weather data for the given city
    // You can use any weather API service of your choice

    // For demonstration purposes, let's assume we have a mock function that returns weather information
    std::string weatherInfo = "Temperature: 25°C, Condition: Sunny";

    return weatherInfo;
}

int main()
{
    std::string city;
    std::cout << "Enter city name: ";
    std::cin >> city;

    std::string weatherInfo = getWeatherInfo(city);
    std::cout << "Weather information for " << city << ": " << weatherInfo << std::endl;

    return 0;
}

// Adding weather news feature to the weather application
// Path: script.cpp
#include <iostream>
#include <string>

// Function to get weather information
std::string getWeatherInfo(const std::string &city)
{
    // Replace this with your API call to fetch weather data for the given city
    // You can use any weather API service of your choice

    // For demonstration purposes, let's assume we have a mock function that returns weather information
    std::string weatherInfo = "Temperature: 25°C, Condition: Sunny";

    return weatherInfo;
}

// Function to get weather news
std::string getWeatherNews()
{
    // Replace this with your API call to fetch weather news
    // You can use any news API service of your choice

    // For demonstration purposes, let's assume we have a mock function that returns weather news
    std::string weatherNews = "Heavy rain expected in some regions";

    return weatherNews;
}

int main()
{
    std::string city;
    std::cout << "Enter city name: ";
    std::cin >> city;

    std::string weatherInfo = getWeatherInfo(city);
    std::cout << "Weather information for " << city << ": " << weatherInfo << std::endl;

    std::string weatherNews = getWeatherNews();
    std::cout << "Weather news: " << weatherNews << std::endl;

    return 0;
}
