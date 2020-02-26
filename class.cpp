#include <iostream>
using namespace std;
class student{
    char name[12];
    int roll;
    int marks[3];
    float percentage;
    public: void readdata()
            {
                cout<<"\nEnter name :";
                cin>>name;
                cout<<"Enter Roll No :";
                cin>>roll;
                cout<<"Marks:\n";
                for(int i=0;i<3;i++){
                    cout<<"Subject "<<i+1<<"->";
                    cin>>marks[i];
                }
                computedata();
            }
            void displaydata()
            {
                cout<<"\nName : "<<name;
                cout<<"\nRoll : "<<roll;
                cout<<"\nPercentage : "<<percentage;
            }
            void computedata()
            {
                int f;
                for(int i=0;i<3;i++)
                    f+=marks[i];
                percentage=f/3;
            }
};

int main()
{
    student s[3];
    cout<<"Enter the data of 3 students:";
    for(int i=0;i<3;i++)
        s[i].readdata();
    cout<<"\n\nData of 3 students :";
    for(int i=0;i<3;i++)
        s[i].displaydata();
    return 0;
}
