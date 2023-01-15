#include <iostream>
using namespace std;

main ()
{
 char code, time;
 float mints, charges, extra;
    cout << "Enter which type of Customer You are (regular or premium ) select (r/p)";
    cin >> code;
    cout << "Press 'D' for day time or Press 'N' for Night time call: ";
    cin >> time;
    cout << "Enter no.Of Minutes: " ;
    cin >> mints; 
    if (code == 'p' || code == 'P')
     if (time == 'd')
     {
     if (mints < 75 )
          {
                charges = 25.00;
                cout << " " << charges;
          }
     else if (mints > 75)
       {
        extra = extra - mints;
        extra = extra * 0.10 + 25.00;
        cout << " " << extra;
       }   
     }
 else if (time == 'n')
     {
      if (mints < 100 )
      {
            charges = 25.00;
            cout << " " << charges;
      }
     else if (mints > 100)
     {
     extra = extra - mints;
     extra = extra * 0.05 + 25.00;
     cout << " " << extra;
     }    
     if (code == 'r' || code == 'R')
       {
         if (time < 50)
         {
            charges = 10.00;
            cout << " " << charges;
         }
         else if (time > 50)
         {
            extra = extra - mints;
            extra = extra * 0.20 + 10.00;
            cout << " " << extra;
         }
       }
 } 

}