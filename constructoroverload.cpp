#include <iostream>
using namespace std;

class cons
{
public:

    float a, b, c, area;

    cons()
    {
       a=0;
       b=0;
    }
    cons(int a)
    {
       area = a*a;
    }
    cons(int b, int c)
    {
        area = b * c;
    }
    int display()
    {
        return area;
    }
}o, o1;

int main()
{
    float a, b, c;
    cout << "Enter the value of a for area of square \n and value of b & c for area of rectangle: ";
    cin >> a >> b >> c;
    cons o(a);
    cons o1(b,c);
    cout << "Area of square is " << o.display() << endl;
    cout << "Area of rectangle is " << o1.display() << endl;
    return 0;
}
