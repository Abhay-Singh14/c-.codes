#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<<"Initially vector size : "<<v.size()<<endl;
    
    v.push_back(5);
    v.push_back(15);
    v.push_back(25);
    v.push_back(35);
    
    cout<<"Now vector size : "<<v.size()<<endl;
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}