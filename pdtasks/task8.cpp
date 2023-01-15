#include <iostream>
using namespace std;
void checkinside (int h, int x, int y);
void checkborder (int h, int x, int y);
main ()
{
    int height, xCordinate, yCordinate;
    cout << "Enter AN Integer (h):";
    cin  >> height;
    cout << "Enter AN X-Coordinate:";
    cin  >> xCordinate;
    cout << "Enter AN Y-Coordinate:";
    cin  >> yCordinate;
    checkinside (height, xCordinate, yCordinate);
    checkborder (height, xCordinate, yCordinate);    
}
void checkinside (int h, int x, int y)
{
    if (x > (h * 1) && x < (h * 2) && y > (h * 1) && y < (h * 4))
    {
        cout << " Inside " ;
    }
    else if (x > (h * 0) && x < (h * 3) && y > (h * 0) && y < (h * 1))
    {
        cout << " Inside ";
    }
}
void checkborder (int h, int x, int y)
{
    if (x == (h * 1) && y >= (h * 1) && y <= (h * 4))
    {
        cout << " Border ";
    }
    else if (x == (h * 2) && y >= (h * 1) && y <= (h * 4))
    {
        cout << " Border ";
    }
    else if (y == (h * 0) && x >= (h * 1) && x <= (h * 2))
    {
        cout << " Border ";
    }
    else if (y == (h * 4) && x >= (h * 1) && x <= (h * 2))
    {
        cout << " Border ";
    }
    else if (y == (h * 1) && x >= (h * 0) && x <= (h * 1 ))
    {
        cout << " Border ";
    }                
    else if (y == (h * 1) && x >= (h * 2) && x <= (h * 3 ))
    {
        cout << " Border ";
    }                      
    else if ( y == (h * 0) && x >= (h * 0) && x <= (h * 2))
    {
        cout << "Border";
    }
    else if ( y == (h * 0) && x >= (h * 2) && x <= (h * 3))
    {
        cout << "Border";
    }  
    else if (x == (h * 0) && y >= (h * 0 ) && y <=(h * 1))
    {
        cout << "Border";
    }
    else if (x == (h * 3) && y >= (h * 0) && y <=(h * 1))
    {
        cout << "Border";
    }
    else 
    {
        cout << "outside";
    }
}
