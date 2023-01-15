#include <iostream>
using namespace std;
float totalIncome (string type, float rows, float columns);
main()
{
    float rows, columns, answer;
    string type;
    cout << "Enter Screen Type: ";
    cin >> type;
    cout << "Enter no. of Columns: ";
    cin >> columns;    
    cout << "Enter no.of rows: ";
    cin >> rows;
    answer = totalIncome (type, rows, columns); 
    cout << "Total Income From The Tickets Are: "<< answer;
}
float totalIncome (string type, float rows, float columns)
{
     float amount;
  if (type == "Premier")
   {
       amount = 12.00 * rows * columns;    
   }
    if (type == "Normal")
 {
     amount = 7.50 * rows * columns;   
 }
 if (type == "Discount")
 {
     amount = 5.00 * rows * columns;   
 }
   return amount;
}
