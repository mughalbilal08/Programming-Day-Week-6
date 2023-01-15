#include <iostream>
using namespace std;
float checkBudget (int budget, string category, int people);
main ()
{
    float budget, people, answer,  finalPrice, tickets;
    string category;
    cout << "Enter Your Budget: ";
    cin >> budget;
    cout << "Enter Your Category: ";
    cin >> category;
    cout << "Enter Your People: ";
    cin >> people;
    answer = checkBudget (budget, category, people);
  if (category == "vip")
    {
        tickets = people * 499.99;
      if (tickets > answer)
      {
        finalPrice = tickets - answer;
        cout << "Not Enough Money! you Need " << finalPrice << "qr.";
      }  
      else
      {
        finalPrice = answer - tickets;
        cout << "Yes! You Have " << finalPrice << "qr. Left";
      }
    }
  if (category == "normal")
    {
        tickets = people * 249.99;
      if (tickets > answer)
      {
        finalPrice = tickets - answer;
        cout << "Not Enough Money! you Need " << finalPrice << "qr.";
      }  
      else
      {
        finalPrice = answer - tickets;
        cout << "Yes! You Have " << finalPrice << "qr. Left";
      }
    }       

}
float checkBudget (int budget, string category, int people)
{
    float budgetAmount;
 if (people <=4)
 {
     budgetAmount = budget - budget * 0.75;
 } 
 if (people > 4 || people <=9 )
 {
    budgetAmount = budget - budget * 0.6;
 }
 if (people > 9 || people <= 24 )
 {
    budgetAmount = budget - budget * 0.5;
 } 
 if (people > 24 || people <= 49 )
 {
    budgetAmount = budget - budget * 0.4;
 }
 if (people > 49  )
 {
    budgetAmount = budget - budget * 0.25;
 }  
    return budgetAmount;
}