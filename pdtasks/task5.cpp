#include <iostream>
using namespace std;
float prices (string fruit, string day, float quantity);
main()
{
    string fruit;
    string day;
    float quantity, answer;
    cout << "Enter Fruit:";
    cin >> fruit; 
    cout << "Enter day:";
    cin >> day; 
    cout << "Enter amount:";
    cin >> quantity; 
    answer = prices (fruit, day, quantity);
    cout << "price is: " << answer; 
}
float prices (string fruit, string day, float quantity)
{
    float amount;
    if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {
        if (fruit == "banana")
        {
            amount = quantity * 2.50;
        }
        else if (fruit == "apple")
        {
            amount = quantity * 1.20;
        }
        else if (fruit == "orange")
        {
            amount = quantity * 0.85;
        }     
        else if (fruit == "grapefruit")
        {
            amount = quantity * 1.45;
        }      
        else if (fruit == "kiwi")
        {
            amount = quantity * 2.70;
        }                          
        else if (fruit == "pineapple")
        {
            amount = quantity * 5.50;
        }                         
        else if (fruit == "grapes")
        {
            amount = quantity * 3.85;
        }
    }        
    if (day == "saturday" || day == "sunday")
    {
        if (fruit == "banana")
        {
            amount = quantity * 2.70;
        }
        else if (fruit == "apple")
        {
            amount = quantity * 1.25;
        }
        else if (fruit == "orange")
        {
            amount = quantity * 0.90;
        }     
        else if (fruit == "grapefruit")
        {
            amount = quantity * 1.60;
        }      
        else if (fruit == "kiwi")
        {
            amount = quantity * 3.00;
        }                          
        else if (fruit == "pineapple")
        {
            amount = quantity * 5.60;
        }                         
        else if (fruit == "grapes")
        {
            amount = quantity * 4.20;
        }                     
        return amount;      
   }
}

