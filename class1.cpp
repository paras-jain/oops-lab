#include <iostream>
#define pi 3.14
using namespace std;
class cylinder{
    int r;
    int h;
    
            void getdata()
            {
                cout<<"Enter radius(cm) : ";
                cin>>r;
                cout<<"Enter height(cm) : ";
                cin>>h;
            }
            void putdata()
            {
                cout<<"\n Surface area : "<< surface_area();
                cout<<"\n Area : "<<area();
                cout<<"\n Volume : "<<volume();
            }
            float volume()
            {
                int v;
                v=pi*r*r*h;
                return v;
            }
            float surface_area()
            {
                int s;
                s=(2*pi*r*h);
                return s;
            }
            float area()
            {
                int a;
                a=(2*pi*r*h)+(2*pi*r*r);
                return a;

            }
};

int main()
{
    cylinder c;
    c.getdata();
    c.putdata();
    return 0;
}
