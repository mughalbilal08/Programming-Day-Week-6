#include <iostream>
using namespace std;
string activity (string temperature, string humidity);
main ()
{
    string temperature, humidity, answer;
    cout << "Enter Temperature: ";
    cin >> temperature;
    cout << "Enter Humidity: ";
    cin >> humidity;
    answer = activity ( temperature, humidity);
    cout << " " << answer;
}
string activity (string temperature, string humidity)
{
     
    if (temperature == "warm" && humidity == "dry")
    {
        return  "play Tennis";
    }
        if (temperature == "warm" && humidity == "humid")
    {
        return "Swim"; 
    }
        if (temperature == "cold" && humidity == "dry")
    {
       return "Play Basketball";
    }
        if (temperature == "cold" && humidity == "humid")
    {
        return "Watch Tv";
    }
}