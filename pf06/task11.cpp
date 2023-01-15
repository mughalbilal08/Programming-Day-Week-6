#include <iostream>
#include <cmath>
using namespace std;
float lowestPrice(int kilo, string time);
main ()
{
   int kilo;
   float answer;
   string time;
   cout << "Enter No. oF Kilometers: ";
   cin >> kilo;
   cout << "Enter Day TIme: ";
   cin >> time;
   answer = lowestPrice( kilo,  time); 
   cout << " lowest price is: " << answer;
}
float lowestPrice(int kilo, string time)
{
    float amount, taxi, bus, train, compare;
if (time == "day" || kilo < 20)
    {
        taxi = 0.70 + (0.79 * kilo);
        amount = taxi;
    } 
    else if (time == "day" || kilo >= 20)
    {
        taxi = 0.70 + (0.79 * kilo);   
        bus = 0.09 * kilo;
        amount = min (taxi, bus); 
    }
    else if (time == "day" || kilo >= 100)
    {
     taxi = 0.70 + (0.79 * kilo);   
     bus = 0.09 * kilo;
     train = 0.06 * kilo;
     compare = min (taxi, bus); 
     amount = min(train, compare);
    }
if (time == "night" || kilo < 20)
    {
        amount = taxi;
        taxi = 0.70 + (0.90 * kilo);
    } 
    else if (time == "night" || kilo >= 20)
    {
        taxi = 0.70 + (0.79 * kilo);   
        bus = 0.09 * kilo;
        amount = min (taxi, bus); 
    }
    else if (time == "night" || kilo >= 100)
    {
     taxi = 0.70 + (0.79 * kilo);   
     bus = 0.09 * kilo;
     compare = min (taxi, bus); 
     amount = min(train, compare);
    }    
       return amount; 
}   
