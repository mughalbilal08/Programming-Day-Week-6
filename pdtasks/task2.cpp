#include <iostream>
using namespace std;
string grading (int marks1, int marks2, int marks3, int marks4, int marks5);
main (){
  int marks1, marks2, marks3, marks4, marks5;
   string result;
   cout << " Enter English subject marks :";
   cin >> marks1;
   cout << " Enter Maths subject marks :";
   cin >> marks2;      
   cout << " Enter Chemistry subject marks :";
   cin >> marks3;   
   cout << " Enter Social Science subject marks :";
   cin >> marks4;
   cout << " Enter Biology subject marks :";
   cin >> marks5;
   result = grading (marks1, marks2, marks3, marks4, marks5 );
   cout << "Your Grade is :" << result;

}
string grading (int marks1, int marks2, int marks3, int marks4, int marks5 )
 {
    float aggregate = marks1 + marks2 + marks3 + marks4 + marks5;
    float percentage = (aggregate * 100)/500; 
    string grade;
 if (percentage >= 90 && percentage <= 100) 
 {
    grade = "A+"; 
 }     
 else if (percentage >= 80 && percentage <= 90) 
 {
    grade = "A"; 
 }     
 else if (percentage >= 70 && percentage <= 80) 
 {
    grade = "B+"; 
 }     
 else if (percentage >= 60 && percentage <= 70) 
 {
    grade = "B"; 
 }
 else if (percentage >= 50 && percentage <= 60) 
 {
   grade = "C"; 
 } 
 else if (percentage >= 40 && percentage <= 50) 
 {
   grade = "D";  
 }
 else if (percentage < 40)  
 {
   grade = "F"; 
 }     
    return grade;
     
 }