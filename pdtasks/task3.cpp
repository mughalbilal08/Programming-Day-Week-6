#include <iostream>
using namespace std;
string explanation (int date, string month);
main ()
{
 int date;
 string month, answer;
    cout << "Enter Date: ";
    cin >> date;
    cout << "Enter Month: ";
    cin >> month;
    answer = explanation( date, month);
    cout << " " << answer;
}
string explanation (int date, string month)
{
 if (month == "march" && date >=21  || (month == "april" && date <= 19 ) )
   { 
    return "aries";
   }
 else if (month == "april" && date >= 20  || (month == "may" && date <= 20 )) 
   {
    return "tauris"; 
    }
 else if (month == "may" && date >= 21  || (month == "june" && date <= 20 )) 
   {
     return "gemini"; 
    }      
 else if (month == "june" && date >= 21 || (month == "july" && date <= 22 )) 
   {
     return "cancer"; 
    } 
 else if (month == "july" && date >= 23  || (month == "august" && date <= 22 )) 
   {
     return "leo"; 
    } 
 else if (month == "august" && date >= 23  || (month == "september" && date <= 22 )) 
   {
     return "virgo"; 
    } 
 else if (month == "september" && date >= 23  || (month == "october" && date <= 22 )) 
   {
     return "libra"; 
    } 
 else if (month == "october" && date >= 23  || (month == "november" && date <= 21 )) 
   {
     return "scorpio"; 
    } 
 else if (month == "november" && date >= 22  || (month == "december" && date <= 21 )) 
   {
     return "sagilatrius"; 
    } 
 else if (month == "december" && date >= 22  || (month == "january" && date <= 19 )) 
   {
     return "capricon"; 
    }                             
else if (month == "january" && date >= 20  || (month == "feburary" && date <= 18 )) 
  {
    return "aquaritius"; 
   }                             
else if (month == "feburary" && date >= 19  || (month == "march" && date <= 20 )) 
  {
    return "pisces"; 
   }                                
}