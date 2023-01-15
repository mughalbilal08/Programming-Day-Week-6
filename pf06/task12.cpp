#include <iostream>
using namespace std;
float checkCost (string city, string product, float quantity);
main ()
{
    string city, product; 
    float quantity;
    float answer;
    cout << "Enter City: ";
    cin >> city;
    cout << "Enter Product: ";
    cin >> product;
    cout << "Enter Quantity: ";
    cin >> quantity;
    answer = checkCost (city, product, quantity);
    cout << "Cost is: " << answer;

}
float checkCost (string city, string product, float quantity)
{
     float amount;
if (city == "Sofia" &&  product == "Coffee" )
{   
    amount = quantity * 0.50;
}
    else if (city == "Piovdiv" &&  product == "Coffee")
    {
       amount = quantity * 0.40; 
    }
    else if (city == "Varna" &&  product == "Coffee")
    {
        amount = quantity * 0.45; 
    }
if (city == "Sofia" &&  product == "Water" )
{
    amount = quantity * 0.80;
}
    else if (city == "Piovdiv" &&  product == "Water")
    {
       amount = quantity * 0.70; 
    }
    else if (city == "Varna" &&  product == "Water")
    {
        amount = quantity * 0.70; 
    }    
if (city == "Sofia" &&  product == "Beer" )
{
    amount = quantity * 1.20;
}
    else if (city == "Piovdiv" &&  product == "Beer")
    {
       amount = quantity * 1.15; 
    }
    else if (city == "Varna" &&  product == "Beer")
    {
        amount = quantity * 1.10; 
    }
if (city == "Sofia" &&  product == "Sweets" )
{
    amount = quantity * 1.45;
}
    else if (city == "Piovdiv" &&  product == "Sweets")
    {
       amount = quantity * 1.30; 
    }
    else if (city == "Varna" &&  product == "Sweets")
    {
        amount = quantity * 1.35; 
    }          
if (city == "Sofia" &&  product == "Peanuts" )
{
    amount = quantity * 1.60;
}
    else if (city == "Piovdiv" &&  product == "Peanuts")
    {
       amount = quantity * 1.50; 
    }
    else if (city == "Varna" &&  product == "Peanuts")
    {
        amount = quantity * 1.55; 
    }              
        return amount;
}
