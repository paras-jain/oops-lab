#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cout << "Enter the number whose table is to be printed: ";
    cin >> n;
    for(int i= 1;i<=10;i++)
    {
        m = i*n;
        cout << n << "*" << i << "=" << m << endl;
    }
    return 0;
}
