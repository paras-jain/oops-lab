#include <iostream>
using namespace std;

int checkLeapYear(int year)
{
    if( (year % 400==0)||(year%4==0 && year%100!=0) )
        return 1;
    else
        return 0;
}
int main()
{
    for(int i=1900;i<=2008;i++)
{
        if(checkLeapYear(i))
            cout << i << " is a leap year." << endl;
    }
 return 0;
}
