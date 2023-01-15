#include <iostream>
using namespace std;
string evenish (int num);
main()
{
    int num;
    string result1;
    cout << "Enter Number: ";
    cin >> num;
    result1 = evenish (num);
    cout << " " << result1;
}
string evenish (int num)
{
    string result;
    if (num % 2 == 0)
    {
    result = "even";
    }
    if (num % 2 != 0)
    {
    result = "odd"; 
    }
    return result;
}