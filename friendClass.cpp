#include<iostream>
#include<conio.h>
using namespace std;  
  
class test
{  
  private:
  int x = 10;  
  
  public:
  friend class case;        
}; 
 
class case
{  
  public:
  void display(test obj)  
        {  
         cout << obj.x << endl;  
        }  
};  

int main()  
{  
 test obj;  
 case obj1;  
 obj1.display(obj);  
 return 0;  
}
