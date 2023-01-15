#include <iostream>
using namespace std;

string checkTitle (int age, char gender);
main ()
{
    int age;
    char gender;
    string answer;
    cout << "Enter Your Age: ";
    cin >> age;
    cout << "Enter Your gender: ";
    cin >> gender;
    answer = checkTitle ( age, gender);
    cout << " " << answer;
}
string checkTitle (int age, char gender)
{
    string output;
  if (age <= 16 && gender == 'm')
  {
    output = "Mr. You're a boy ! ";
  }
  if (age > 16 && gender == 'f')
  {
    output = "Mrs.  You're a girl !";
  }
    return output;
}
