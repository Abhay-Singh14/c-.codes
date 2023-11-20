#include<iostream>
using namespace std;

class temp{
    public:
        template <class T1>
        
        char fun(T1 val)
        {
            cout<<"Result : "<<val<<endl;
        }
};
int main()
{
    temp t;
    t.fun("C++");   //for string
    t.fun('C');     // for character
    t.fun(56);      // for integer
    t.fun(9.8);    // for float
    
}