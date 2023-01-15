#include <iostream>
using namespace std;

main ()
{
    int examHour, examMin, aHour, aMin, paparTIme, arrivalTIme, time, hour, min;
    cout << "Enter Exam Starting TIme (hours): ";
    cin >> examHour;
    cout << "Enter Exam Starting TIme (Minutes): ";
    cin >> examMin;
    cout << "Enter Exam Arrival TIme (hours): ";
    cin >> aHour;
    cout << "Enter Exam Arrival TIme (Minutes): ";
    cin >> aMin;
    paparTIme = (examHour * 60) + examMin;
    arrivalTIme = (aHour * 60) + aMin;
    if (arrivalTIme > paparTIme)
    {
        time = arrivalTIme - paparTIme;
        min = time % 60;
        hour = time / 60;
        cout << "late"<< endl;
        cout <<" "<< hour << " hours :" << " " << min << " minutes after the start ";
    }
    else if (paparTIme > arrivalTIme)
    {
        time = paparTIme - arrivalTIme;
        min = time % 60;
        hour = time / 60;
        cout << "early"<< endl;
        cout <<" "<< hour << " hours :" << " " << min << " minutes before the start ";
    }
       time = paparTIme - arrivalTIme;
     if ( time <= 30)
    {
        
        cout << "ON Time";
        cout << " " << time << " Minutes before the Start";
    }
}