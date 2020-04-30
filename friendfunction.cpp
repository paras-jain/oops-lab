#include <iostream>
using namespace std;


class test {
private:
   int num=100;
   char ch='Z';
public:
   friend void disp(test obj);
};

void disp(test obj){
   cout<<obj.num<<endl; 
   cout<<obj.ch<<endl;
}


int main() {
   test obj;
   disp(obj);
   return 0;
}
