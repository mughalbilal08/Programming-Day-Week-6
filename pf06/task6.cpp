#include <iostream>
using namespace std;
float discount (string day, string month, float amount);
main ()
{
    int amount;
    string day, month;
    float answer;
    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter Amount: ";
    cin >> amount;
    answer = discount (day, month, amount); 
    cout << "Payable amount after discount iS: " << answer;

}
float discount (string day, string month, float amount)
{
    float payable ;
    if (day == "Sunday" && month == "October" || month == "March" || month == "August")
    {
        payable = amount - (amount * 0.1);
    }
     else {
        payable = amount;
     }
        return payable;
}