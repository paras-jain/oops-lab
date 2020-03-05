#include <iostream>
using namespace std;

class add{
    public:
    int sum(int a, int b){
        return a+b;
    }
    int sum(int a, int b, int c){
        return a+b+c;
    }
}obj;

int main()
{
    cout << "Sum is " << obj.sum(10,5) << endl;
    cout << "Sum is " << obj.sum(10,5,25) << endl;
    return 0;
}
