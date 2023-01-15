#include <iostream>
using namespace std;
float isGreatest(int num1,int num2,int num3);
main ()
{
    int num1, num2, num3;
    int result;
    cout << "ENter 1st NUmber: ";
    cin>> num1; 
    cout << "ENter 2nd NUmber: ";
    cin>> num2; 
    cout << "ENter 3rd NUmber: ";
    cin>> num3;
    result = isGreatest(num1, num2, num3);
    cout << "The Greatest NUmber is :"<< result;

}
float isGreatest(int num1,int num2,int num3)
  {
    int great;
    if (num1 > num2 && num1 > num3 )
    {
        great = num1;       
    }
    if (num2 > num1 && num2 > num3 )
    {
        great = num2;       
    }
    if (num3 > num1 && num3 > num2 )
    {
        great = num3;       
    }
    return great;
  }