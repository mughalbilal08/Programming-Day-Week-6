#include <iostream>
using namespace std;

string checkSpeed (float speed);
main ()
{
    string answer;
    int speed;
    cin >> speed;
    answer = checkSpeed (speed);
    cout << " " << answer;

}
string checkSpeed (float speed)
{
   string result;
 if (speed <=10 )
  {
    result = "slow";
  }  
  if (speed > 10 && speed <=50 )
 {
    result = "Average";
 }
  if (speed > 50 && speed <=150 )
 {
    result = "fast";
 }
  if (speed > 150 )
 {
    result = "extremely fast";
 }
    return result;
}