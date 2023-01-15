#include <iostream>
using namespace std;
int marks (int num);
main()
{
  int num;
  char answer;
  cout << "Enter Number: ";
  cin >> num;
  answer = marks (num);
  cout << " " << answer;  
}
    int marks (int num)
    { 
      char result; 
    if (num < 50)
     {
        result =  'F';
     } 
    else if (num >= 50 && num <= 60 )
      {
        result =  'E';
      } 
    else if (num >= 61 && num <= 70 )
      {
        result =  'D';
      } 
    else if (num >= 70 && num <= 80 )
      {
        result =  'C';
      }
    else if (num >= 80 && num <= 85 )
     {
        result =  'B';
     }                        
    else if (num > 85 )
     {
        result =  'A';
     }   
        return result;     
    
    }