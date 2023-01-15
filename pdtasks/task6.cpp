#include <iostream>
using namespace std;
float studiostays (string month, int stays);
float appartmentStays (string month, int stays);
main()
{
    string month;
    float numberOfStays, answer, answer1;
    cout << "Enter Month: ";
    cin >> month;
    cout << "Enter Days of Stays: ";
    cin >> numberOfStays;
    answer =  studiostays ( month, numberOfStays); 
    answer1=  appartmentStays ( month, numberOfStays);
    cout << "Studio :" << answer << endl;
    cout << "appartment :" << answer1;
}
float studiostays (string month, int stays)
{
  float amount;
  if (month == "may" || month == "october")
  {
   if (stays <= 7)
    {  
     float discount = 50;
      amount = stays * discount;
    }
   else if (stays > 7 && stays <=14)
    {
      float discount = 50 - 50 * 0.5;
       amount = stays * discount; 
    } 
    else if (stays > 14)
    {
      float discount = 50 - 50 * 0.3;
       amount = stays * discount; 
    }      
  }
  if (month == "june" || month == "september")
  {  
   if (stays <= 14)  
    {  
     float discount = 75.20;
      amount = stays * discount;
    }   
    else if (stays > 14)
    {
      float discount = 75.20 - 75.20 * 0.2;
      amount = stays * discount; 
    }      
  }
    if (month == "july" || month == "august")
  {
   if (stays > 14)  
    {  
     float discount = 76.00;
      amount = stays * discount;
    }   
  }   
  return amount;
}
float appartmentStays (string month, int stays)
{
  float amount;
  if (month == "may" || month == "october")
  {
    if (stays <= 14)
    {
      float discount = 65;
       amount = stays * discount; 
    } 
    else if (stays > 14)
    {  
     float discount = 65 - 65 * 0.1;
      amount = stays * discount;
    }
  }
  if (month == "june" || month == "september")
  {
   if (stays <= 14)  
    {  
     float discount = 68.70;
      amount = stays * discount;
    }   
    else if (stays > 14)
    {
      float discount = 68.70 - 68.70 * 0.1;
       amount = stays * discount; 
    }      
  }
    if (month == "july" || month == "august")
  {
   if (stays <= 14)  
    {  
     float discount = 76;
      amount = stays * discount;
    }
   else if (stays > 14)
   {
     float discount = 76 - 76 * 0.1;
      amount = stays * discount; 
   }             
  }   
  return amount;
}